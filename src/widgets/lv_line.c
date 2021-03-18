/**
 * @file lv_line.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "lv_line.h"

#if LV_USE_LINE != 0
#include "../misc/lv_assert.h"
#include "../draw/lv_draw.h"
#include "../misc/lv_math.h"
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

/*********************
 *      DEFINES
 *********************/
#define MY_CLASS &lv_line_class

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void lv_line_constructor(lv_obj_t * obj, const lv_obj_t * copy);
static void lv_line_event(lv_obj_t * obj, lv_event_t e);

/**********************
 *  STATIC VARIABLES
 **********************/
const lv_obj_class_t lv_line_class = {
    .constructor_cb = lv_line_constructor,
    .event_cb = lv_line_event,
    .instance_size = sizeof(lv_line_t),
    .base_class = &lv_obj_class
};

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * lv_line_create(lv_obj_t * parent, const lv_obj_t * copy)
{
    LV_LOG_INFO("begin")
    return lv_obj_create_from_class(&lv_line_class, parent, copy);
}

/*=====================
 * Setter functions
 *====================*/

void lv_line_set_points(lv_obj_t * obj, const lv_point_t points[], uint16_t point_num)
{
    LV_ASSERT_OBJ(obj, MY_CLASS);

    lv_line_t * line = (lv_line_t *)obj;
    line->point_array    = points;
    line->point_num      = point_num;

    lv_obj_handle_self_size_chg(obj);

    lv_obj_invalidate(obj);
}

void lv_line_set_y_invert(lv_obj_t * obj, bool en)
{
    LV_ASSERT_OBJ(obj, MY_CLASS);

    lv_line_t * line = (lv_line_t *)obj;
    if(line->y_inv == en) return;

    line->y_inv = en == false ? 0 : 1;

    lv_obj_invalidate(obj);
}

/*=====================
 * Getter functions
 *====================*/

bool lv_line_get_y_invert(const lv_obj_t * obj)
{
    LV_ASSERT_OBJ(obj, MY_CLASS);

    lv_line_t * line = (lv_line_t *)obj;

    return line->y_inv == 0 ? false : true;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

static void lv_line_constructor(lv_obj_t * obj, const lv_obj_t * copy)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_line_t * line = (lv_line_t *)obj;

    line->point_num   = 0;
    line->point_array = NULL;
    line->y_inv       = 0;


    /*Init the new line*/
    if(copy == NULL) {
        lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
        lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE);
    }
    /*Copy an existing object*/
    else {
        lv_line_t * copy_line = (lv_line_t *)copy;
        lv_line_set_y_invert(obj, lv_line_get_y_invert(copy));
        lv_line_set_points(obj, copy_line->point_array, copy_line->point_num);

    }

    LV_TRACE_OBJ_CREATE("finished");
}

static void lv_line_event(lv_obj_t * obj, lv_event_t e)
{
    lv_res_t res;

    /*Include the ancient signal function*/
    res = lv_obj_event_base(MY_CLASS, obj, e);
    if(res != LV_RES_OK) return;

    if(e == LV_EVENT_REFR_EXT_DRAW_SIZE) {
        /*The corner of the skew lines is out of the intended area*/
        lv_coord_t line_width = lv_obj_get_style_line_width(obj, LV_PART_MAIN);
        lv_coord_t * s = lv_event_get_param();
        if(*s < line_width) *s = line_width;
    }
    else if(e == LV_EVENT_GET_SELF_SIZE) {
        lv_line_t * line = (lv_line_t *)obj;

        lv_point_t * p = lv_event_get_param();
        lv_coord_t w = 0;
        lv_coord_t h = 0;
        if(line->point_num > 0) {
            uint16_t i;
            for(i = 0; i < line->point_num; i++) {
                w = LV_MAX(line->point_array[i].x, w);
                h = LV_MAX(line->point_array[i].y, h);
            }

            lv_coord_t line_width = lv_obj_get_style_line_width(obj, LV_PART_MAIN);
            w += line_width;
            h += line_width;
            p->x = w;
            p->y = h;
        }
    } else if(e == LV_EVENT_DRAW_MAIN) {
        lv_line_t * line = (lv_line_t *)obj;
        const lv_area_t * clip_area = lv_event_get_param();

        if(line->point_num == 0 || line->point_array == NULL) return;

        lv_area_t area;
        lv_obj_get_coords(obj, &area);
        lv_coord_t x_ofs = area.x1 - lv_obj_get_scroll_x(obj);
        lv_coord_t y_ofs = area.y1 - lv_obj_get_scroll_y(obj);
        lv_point_t p1;
        lv_point_t p2;
        lv_coord_t h = lv_obj_get_height(obj);
        uint16_t i;

        lv_draw_line_dsc_t line_dsc;
        lv_draw_line_dsc_init(&line_dsc);
        lv_obj_init_draw_line_dsc(obj, LV_PART_MAIN, &line_dsc);

        /*Read all points and draw the lines*/
        for(i = 0; i < line->point_num - 1; i++) {

            p1.x = line->point_array[i].x + x_ofs;
            p2.x = line->point_array[i + 1].x + x_ofs;

            if(line->y_inv == 0) {
                p1.y = line->point_array[i].y + y_ofs;
                p2.y = line->point_array[i + 1].y + y_ofs;
            }
            else {
                p1.y = h - line->point_array[i].y + y_ofs;
                p2.y = h - line->point_array[i + 1].y + y_ofs;
            }
            lv_draw_line(&p1, &p2, clip_area, &line_dsc);
            line_dsc.round_start = 0;   /*Draw the rounding only on the end points after the first line*/
        }
    }
}
#endif
