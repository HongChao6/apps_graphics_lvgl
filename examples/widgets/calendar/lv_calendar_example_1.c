#include "../../../lvgl.h"
#include <stdio.h>

#if LV_USE_CALENDAR

static void event_handler(lv_obj_t * obj, lv_event_t event)
{
    if(event == LV_EVENT_VALUE_CHANGED) {
        lv_calendar_date_t date;
        if(lv_calendar_get_pressed_date(obj, &date)) {
            printf("Clicked date: %02d.%02d.%d\n", date.day, date.month, date.year);
        }
    }
}

void lv_ex_calendar_1(void)
{
    lv_obj_t  * calendar = lv_calendar_create(lv_scr_act());
    lv_obj_set_size(calendar, 180, 180);
    lv_obj_align(calendar, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_obj_add_event_cb(calendar, event_handler, NULL);

    /*Set today's date*/
    lv_calendar_date_t today;
    today.year = 2021;
    today.month = 02;
    today.day = 23;

    lv_calendar_set_today_date(calendar, &today);
    lv_calendar_set_showed_date(calendar, &today);

    /*Highlight a few days*/
    static lv_calendar_date_t highlighted_days[3];       /*Only its pointer will be saved so should be static*/
    highlighted_days[0].year = 2020;
    highlighted_days[0].month = 10;
    highlighted_days[0].day = 6;

    highlighted_days[1].year = 2020;
    highlighted_days[1].month = 10;
    highlighted_days[1].day = 11;

    highlighted_days[2].year = 2020;
    highlighted_days[2].month = 11;
    highlighted_days[2].day = 22;

    lv_calendar_set_highlighted_dates(calendar, highlighted_days, 3);

#if LV_USE_CALENDAR_HEADER_ARROW
    lv_obj_t * h = lv_calendar_header_arrow_create(lv_scr_act(), calendar, 25);
    lv_obj_align(h, NULL, LV_ALIGN_IN_TOP_MID, 0, 5);
    lv_obj_align(calendar, h, LV_ALIGN_OUT_BOTTOM_MID, 0, 0);
#endif
}

#endif
