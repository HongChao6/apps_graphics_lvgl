/**
 * @file lv_obj_class.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "lv_obj.h"

/*********************
 *      DEFINES
 *********************/
#define MY_CLASS &lv_obj

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  GLOBAL PROTOTYPES
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static uint32_t get_instance_size(const lv_obj_class_t * class_p);

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * lv_obj_create_from_class(const lv_obj_class_t * class_p, lv_obj_t * parent, const lv_obj_t * copy)
{
    uint32_t s = get_instance_size(class_p);
    lv_obj_t * obj = lv_mem_alloc(s);
    lv_memset_00(obj, s);
    obj->class_p = class_p;

    const lv_obj_class_t * class_start = class_p;

    while(class_start && class_start->constructor_cb == NULL) class_start = class_start->base_class;

    class_start->constructor_cb(obj, parent, copy);

    if(!copy) lv_theme_apply(obj);
//    else lv_style_list_copy(&checkbox->style_indic, &checkbox_copy->style_indic);

    return obj;
}

void lv_obj_construct_base(lv_obj_t * obj, lv_obj_t * parent, const lv_obj_t * copy)
{
    const lv_obj_class_t * original_class_p = obj->class_p;

    /*Don't let the descendant methods run during constructing the ancestor type*/
    obj->class_p = obj->class_p->base_class;

    obj->class_p->constructor_cb(obj, parent, copy);

    /*Restore the original class*/
    obj->class_p = original_class_p;

}

lv_res_t lv_obj_signal_base(const lv_obj_class_t * class_p, struct _lv_obj_t * obj, lv_signal_t sign, void * param)
{
    if(class_p == NULL) return LV_RES_OK;

    /*Find a base in which signal_cb is set*/
    const lv_obj_class_t * base = class_p->base_class;
    while(base && base->signal_cb == NULL) base = base->base_class;

    if(base == NULL) return LV_RES_OK;
    if(base->signal_cb == NULL) return LV_RES_OK;

    return base->signal_cb(obj, sign, param);
}

lv_draw_res_t lv_obj_draw_base(const lv_obj_class_t * class_p, struct _lv_obj_t * obj, const lv_area_t * clip_area, lv_draw_mode_t mode)
{
    if(class_p == NULL) return LV_DRAW_RES_OK;

    /*Find a base in which draw_cb is set*/
    const lv_obj_class_t * base = class_p->base_class;
    while(base && base->draw_cb == NULL) base = base->base_class;

    if(base == NULL) return LV_DRAW_RES_OK;
    if(base->draw_cb == NULL) return LV_DRAW_RES_OK;

    return base->draw_cb(obj, clip_area, mode);
}

bool lv_obj_is_editable(struct _lv_obj_t * obj)
{
    const lv_obj_class_t * class_p = obj->class_p;

    /*Find a base in which editable is set*/
    const lv_obj_class_t * base = class_p->base_class;
    while(base && base->editable != LV_OBJ_CLASS_EDITABLE_INHERIT) base = base->base_class;

    if(base == NULL) return false;

    return base->editable == LV_OBJ_CLASS_EDITABLE_TRUE ? true : false;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

static uint32_t get_instance_size(const lv_obj_class_t * class_p)
{
    /*Find a base in which instance size is set*/
    const lv_obj_class_t * base = class_p;
    while(base && base->instance_size == 0) base = base->base_class;

    if(base == NULL) return 0;  /*Never happens: set at least in `lv_obj` class */

    return base->instance_size;
}
