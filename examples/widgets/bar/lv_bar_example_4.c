#include "../../../lvgl.h"
#if LV_USE_BAR

/**
 * Bar with stripe pattern and ranged value
 */
void lv_ex_bar_4(void)
{
    LV_IMG_DECLARE(img_skew_strip);
    static lv_style_t style_indic;

    lv_style_init(&style_indic);
    lv_style_set_bg_img_src(&style_indic, &img_skew_strip);
    lv_style_set_bg_img_tiled(&style_indic, true);
    lv_style_set_bg_img_opa(&style_indic, LV_OPA_30);

    lv_obj_t * bar = lv_bar_create(lv_scr_act(), NULL);
    lv_obj_add_style(bar, LV_PART_INDICATOR, LV_STATE_DEFAULT, &style_indic);

    lv_obj_set_size(bar, 260, 20);
    lv_obj_align(bar, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_bar_set_type(bar, LV_BAR_TYPE_RANGE);
    lv_bar_set_value(bar, 90, LV_ANIM_OFF);
    lv_bar_set_start_value(bar, 20, LV_ANIM_OFF);
}

#endif
