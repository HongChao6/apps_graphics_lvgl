
/*
 **********************************************************************
 *                            DO NOT EDIT
 * This file is automatically generated by "style_api_gen.py"
 **********************************************************************
 */


#ifndef LV_OBJ_STYLE_GEN_H
#define LV_OBJ_STYLE_GEN_H

#include "../misc/lv_area.h"
#include "../misc/lv_style.h"
#include "../core/lv_obj_style.h"

static inline int32_t lv_obj_get_style_width(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_WIDTH);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_min_width(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_MIN_WIDTH);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_max_width(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_MAX_WIDTH);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_height(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_HEIGHT);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_min_height(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_MIN_HEIGHT);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_max_height(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_MAX_HEIGHT);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_length(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_LENGTH);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_x(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_X);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_y(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_Y);
    return (int32_t)v.num;
}

static inline lv_align_t lv_obj_get_style_align(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_ALIGN);
    return (lv_align_t)v.num;
}

static inline int32_t lv_obj_get_style_transform_width(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_TRANSFORM_WIDTH);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_transform_height(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_TRANSFORM_HEIGHT);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_translate_x(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_TRANSLATE_X);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_translate_y(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_TRANSLATE_Y);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_transform_scale_x(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_TRANSFORM_SCALE_X);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_transform_scale_y(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_TRANSFORM_SCALE_Y);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_transform_rotation(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_TRANSFORM_ROTATION);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_transform_pivot_x(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_TRANSFORM_PIVOT_X);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_transform_pivot_y(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_TRANSFORM_PIVOT_Y);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_transform_skew_x(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_TRANSFORM_SKEW_X);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_transform_skew_y(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_TRANSFORM_SKEW_Y);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_pad_top(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_PAD_TOP);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_pad_bottom(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_PAD_BOTTOM);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_pad_left(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_PAD_LEFT);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_pad_right(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_PAD_RIGHT);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_pad_row(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_PAD_ROW);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_pad_column(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_PAD_COLUMN);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_margin_top(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_MARGIN_TOP);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_margin_bottom(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_MARGIN_BOTTOM);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_margin_left(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_MARGIN_LEFT);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_margin_right(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_MARGIN_RIGHT);
    return (int32_t)v.num;
}

static inline lv_color_t lv_obj_get_style_bg_color(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BG_COLOR);
    return v.color;
}

static inline lv_color_t lv_obj_get_style_bg_color_filtered(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = _lv_obj_style_apply_color_filter(obj, part, lv_obj_get_style_prop(obj, part, LV_STYLE_BG_COLOR));
    return v.color;
}

static inline lv_opa_t lv_obj_get_style_bg_opa(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BG_OPA);
    return (lv_opa_t)v.num;
}

static inline lv_color_t lv_obj_get_style_bg_grad_color(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BG_GRAD_COLOR);
    return v.color;
}

static inline lv_color_t lv_obj_get_style_bg_grad_color_filtered(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = _lv_obj_style_apply_color_filter(obj, part, lv_obj_get_style_prop(obj, part,
                                                                                           LV_STYLE_BG_GRAD_COLOR));
    return v.color;
}

static inline lv_grad_dir_t lv_obj_get_style_bg_grad_dir(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BG_GRAD_DIR);
    return (lv_grad_dir_t)v.num;
}

static inline int32_t lv_obj_get_style_bg_main_stop(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BG_MAIN_STOP);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_bg_grad_stop(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BG_GRAD_STOP);
    return (int32_t)v.num;
}

static inline lv_opa_t lv_obj_get_style_bg_main_opa(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BG_MAIN_OPA);
    return (lv_opa_t)v.num;
}

static inline lv_opa_t lv_obj_get_style_bg_grad_opa(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BG_GRAD_OPA);
    return (lv_opa_t)v.num;
}

static inline const lv_grad_dsc_t * lv_obj_get_style_bg_grad(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BG_GRAD);
    return (const lv_grad_dsc_t *)v.ptr;
}

static inline const void * lv_obj_get_style_bg_image_src(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BG_IMAGE_SRC);
    return (const void *)v.ptr;
}

static inline lv_opa_t lv_obj_get_style_bg_image_opa(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BG_IMAGE_OPA);
    return (lv_opa_t)v.num;
}

static inline lv_color_t lv_obj_get_style_bg_image_recolor(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BG_IMAGE_RECOLOR);
    return v.color;
}

static inline lv_color_t lv_obj_get_style_bg_image_recolor_filtered(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = _lv_obj_style_apply_color_filter(obj, part, lv_obj_get_style_prop(obj, part,
                                                                                           LV_STYLE_BG_IMAGE_RECOLOR));
    return v.color;
}

static inline lv_opa_t lv_obj_get_style_bg_image_recolor_opa(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BG_IMAGE_RECOLOR_OPA);
    return (lv_opa_t)v.num;
}

static inline bool lv_obj_get_style_bg_image_tiled(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BG_IMAGE_TILED);
    return (bool)v.num;
}

static inline lv_color_t lv_obj_get_style_border_color(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BORDER_COLOR);
    return v.color;
}

static inline lv_color_t lv_obj_get_style_border_color_filtered(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = _lv_obj_style_apply_color_filter(obj, part, lv_obj_get_style_prop(obj, part,
                                                                                           LV_STYLE_BORDER_COLOR));
    return v.color;
}

static inline lv_opa_t lv_obj_get_style_border_opa(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BORDER_OPA);
    return (lv_opa_t)v.num;
}

static inline int32_t lv_obj_get_style_border_width(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BORDER_WIDTH);
    return (int32_t)v.num;
}

static inline lv_border_side_t lv_obj_get_style_border_side(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BORDER_SIDE);
    return (lv_border_side_t)v.num;
}

static inline bool lv_obj_get_style_border_post(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BORDER_POST);
    return (bool)v.num;
}

static inline int32_t lv_obj_get_style_outline_width(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_OUTLINE_WIDTH);
    return (int32_t)v.num;
}

static inline lv_color_t lv_obj_get_style_outline_color(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_OUTLINE_COLOR);
    return v.color;
}

static inline lv_color_t lv_obj_get_style_outline_color_filtered(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = _lv_obj_style_apply_color_filter(obj, part, lv_obj_get_style_prop(obj, part,
                                                                                           LV_STYLE_OUTLINE_COLOR));
    return v.color;
}

static inline lv_opa_t lv_obj_get_style_outline_opa(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_OUTLINE_OPA);
    return (lv_opa_t)v.num;
}

static inline int32_t lv_obj_get_style_outline_pad(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_OUTLINE_PAD);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_shadow_width(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_SHADOW_WIDTH);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_shadow_offset_x(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_SHADOW_OFFSET_X);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_shadow_offset_y(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_SHADOW_OFFSET_Y);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_shadow_spread(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_SHADOW_SPREAD);
    return (int32_t)v.num;
}

static inline lv_color_t lv_obj_get_style_shadow_color(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_SHADOW_COLOR);
    return v.color;
}

static inline lv_color_t lv_obj_get_style_shadow_color_filtered(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = _lv_obj_style_apply_color_filter(obj, part, lv_obj_get_style_prop(obj, part,
                                                                                           LV_STYLE_SHADOW_COLOR));
    return v.color;
}

static inline lv_opa_t lv_obj_get_style_shadow_opa(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_SHADOW_OPA);
    return (lv_opa_t)v.num;
}

static inline lv_opa_t lv_obj_get_style_image_opa(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_IMAGE_OPA);
    return (lv_opa_t)v.num;
}

static inline lv_color_t lv_obj_get_style_image_recolor(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_IMAGE_RECOLOR);
    return v.color;
}

static inline lv_color_t lv_obj_get_style_image_recolor_filtered(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = _lv_obj_style_apply_color_filter(obj, part, lv_obj_get_style_prop(obj, part,
                                                                                           LV_STYLE_IMAGE_RECOLOR));
    return v.color;
}

static inline lv_opa_t lv_obj_get_style_image_recolor_opa(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_IMAGE_RECOLOR_OPA);
    return (lv_opa_t)v.num;
}

static inline int32_t lv_obj_get_style_line_width(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_LINE_WIDTH);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_line_dash_width(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_LINE_DASH_WIDTH);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_line_dash_gap(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_LINE_DASH_GAP);
    return (int32_t)v.num;
}

static inline bool lv_obj_get_style_line_rounded(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_LINE_ROUNDED);
    return (bool)v.num;
}

static inline lv_color_t lv_obj_get_style_line_color(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_LINE_COLOR);
    return v.color;
}

static inline lv_color_t lv_obj_get_style_line_color_filtered(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = _lv_obj_style_apply_color_filter(obj, part, lv_obj_get_style_prop(obj, part, LV_STYLE_LINE_COLOR));
    return v.color;
}

static inline lv_opa_t lv_obj_get_style_line_opa(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_LINE_OPA);
    return (lv_opa_t)v.num;
}

static inline int32_t lv_obj_get_style_arc_width(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_ARC_WIDTH);
    return (int32_t)v.num;
}

static inline bool lv_obj_get_style_arc_rounded(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_ARC_ROUNDED);
    return (bool)v.num;
}

static inline lv_color_t lv_obj_get_style_arc_color(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_ARC_COLOR);
    return v.color;
}

static inline lv_color_t lv_obj_get_style_arc_color_filtered(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = _lv_obj_style_apply_color_filter(obj, part, lv_obj_get_style_prop(obj, part, LV_STYLE_ARC_COLOR));
    return v.color;
}

static inline lv_opa_t lv_obj_get_style_arc_opa(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_ARC_OPA);
    return (lv_opa_t)v.num;
}

static inline const void * lv_obj_get_style_arc_image_src(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_ARC_IMAGE_SRC);
    return (const void *)v.ptr;
}

static inline lv_color_t lv_obj_get_style_text_color(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_TEXT_COLOR);
    return v.color;
}

static inline lv_color_t lv_obj_get_style_text_color_filtered(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = _lv_obj_style_apply_color_filter(obj, part, lv_obj_get_style_prop(obj, part, LV_STYLE_TEXT_COLOR));
    return v.color;
}

static inline lv_opa_t lv_obj_get_style_text_opa(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_TEXT_OPA);
    return (lv_opa_t)v.num;
}

static inline const lv_font_t * lv_obj_get_style_text_font(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_TEXT_FONT);
    return (const lv_font_t *)v.ptr;
}

static inline int32_t lv_obj_get_style_text_letter_space(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_TEXT_LETTER_SPACE);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_text_line_space(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_TEXT_LINE_SPACE);
    return (int32_t)v.num;
}

static inline lv_text_decor_t lv_obj_get_style_text_decor(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_TEXT_DECOR);
    return (lv_text_decor_t)v.num;
}

static inline lv_text_align_t lv_obj_get_style_text_align(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_TEXT_ALIGN);
    return (lv_text_align_t)v.num;
}

static inline int32_t lv_obj_get_style_radius(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_RADIUS);
    return (int32_t)v.num;
}

static inline bool lv_obj_get_style_clip_corner(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_CLIP_CORNER);
    return (bool)v.num;
}

static inline lv_opa_t lv_obj_get_style_opa(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_OPA);
    return (lv_opa_t)v.num;
}

static inline lv_opa_t lv_obj_get_style_opa_layered(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_OPA_LAYERED);
    return (lv_opa_t)v.num;
}

static inline const lv_color_filter_dsc_t * lv_obj_get_style_color_filter_dsc(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_COLOR_FILTER_DSC);
    return (const lv_color_filter_dsc_t *)v.ptr;
}

static inline lv_opa_t lv_obj_get_style_color_filter_opa(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_COLOR_FILTER_OPA);
    return (lv_opa_t)v.num;
}

static inline const lv_anim_t * lv_obj_get_style_anim(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_ANIM);
    return (const lv_anim_t *)v.ptr;
}

static inline uint32_t lv_obj_get_style_anim_duration(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_ANIM_DURATION);
    return (uint32_t)v.num;
}

static inline const lv_style_transition_dsc_t * lv_obj_get_style_transition(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_TRANSITION);
    return (const lv_style_transition_dsc_t *)v.ptr;
}

static inline lv_blend_mode_t lv_obj_get_style_blend_mode(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BLEND_MODE);
    return (lv_blend_mode_t)v.num;
}

static inline uint16_t lv_obj_get_style_layout(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_LAYOUT);
    return (uint16_t)v.num;
}

static inline lv_base_dir_t lv_obj_get_style_base_dir(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BASE_DIR);
    return (lv_base_dir_t)v.num;
}

static inline const lv_image_dsc_t * lv_obj_get_style_bitmap_mask_src(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_BITMAP_MASK_SRC);
    return (const lv_image_dsc_t *)v.ptr;
}

#if LV_USE_FLEX
static inline lv_flex_flow_t lv_obj_get_style_flex_flow(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_FLEX_FLOW);
    return (lv_flex_flow_t)v.num;
}

static inline lv_flex_align_t lv_obj_get_style_flex_main_place(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_FLEX_MAIN_PLACE);
    return (lv_flex_align_t)v.num;
}

static inline lv_flex_align_t lv_obj_get_style_flex_cross_place(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_FLEX_CROSS_PLACE);
    return (lv_flex_align_t)v.num;
}

static inline lv_flex_align_t lv_obj_get_style_flex_track_place(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_FLEX_TRACK_PLACE);
    return (lv_flex_align_t)v.num;
}

static inline uint8_t lv_obj_get_style_flex_grow(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_FLEX_GROW);
    return (uint8_t)v.num;
}

#endif /*LV_USE_FLEX*/

#if LV_USE_GRID
static inline const int32_t * lv_obj_get_style_grid_column_dsc_array(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_GRID_COLUMN_DSC_ARRAY);
    return (const int32_t *)v.ptr;
}

static inline lv_grid_align_t lv_obj_get_style_grid_column_align(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_GRID_COLUMN_ALIGN);
    return (lv_grid_align_t)v.num;
}

static inline const int32_t * lv_obj_get_style_grid_row_dsc_array(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_GRID_ROW_DSC_ARRAY);
    return (const int32_t *)v.ptr;
}

static inline lv_grid_align_t lv_obj_get_style_grid_row_align(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_GRID_ROW_ALIGN);
    return (lv_grid_align_t)v.num;
}

static inline int32_t lv_obj_get_style_grid_cell_column_pos(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_GRID_CELL_COLUMN_POS);
    return (int32_t)v.num;
}

static inline lv_grid_align_t lv_obj_get_style_grid_cell_x_align(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_GRID_CELL_X_ALIGN);
    return (lv_grid_align_t)v.num;
}

static inline int32_t lv_obj_get_style_grid_cell_column_span(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_GRID_CELL_COLUMN_SPAN);
    return (int32_t)v.num;
}

static inline int32_t lv_obj_get_style_grid_cell_row_pos(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_GRID_CELL_ROW_POS);
    return (int32_t)v.num;
}

static inline lv_grid_align_t lv_obj_get_style_grid_cell_y_align(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_GRID_CELL_Y_ALIGN);
    return (lv_grid_align_t)v.num;
}

static inline int32_t lv_obj_get_style_grid_cell_row_span(const lv_obj_t * obj, uint32_t part)
{
    lv_style_value_t v = lv_obj_get_style_prop(obj, part, LV_STYLE_GRID_CELL_ROW_SPAN);
    return (int32_t)v.num;
}

#endif /*LV_USE_GRID*/

void lv_obj_set_style_width(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_min_width(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_max_width(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_height(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_min_height(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_max_height(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_length(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_x(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_y(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_align(lv_obj_t * obj, lv_align_t value, lv_style_selector_t selector);
void lv_obj_set_style_transform_width(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_transform_height(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_translate_x(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_translate_y(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_transform_scale_x(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_transform_scale_y(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_transform_rotation(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_transform_pivot_x(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_transform_pivot_y(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_transform_skew_x(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_transform_skew_y(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_pad_top(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_pad_bottom(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_pad_left(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_pad_right(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_pad_row(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_pad_column(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_margin_top(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_margin_bottom(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_margin_left(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_margin_right(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_bg_color(lv_obj_t * obj, lv_color_t value, lv_style_selector_t selector);
void lv_obj_set_style_bg_opa(lv_obj_t * obj, lv_opa_t value, lv_style_selector_t selector);
void lv_obj_set_style_bg_grad_color(lv_obj_t * obj, lv_color_t value, lv_style_selector_t selector);
void lv_obj_set_style_bg_grad_dir(lv_obj_t * obj, lv_grad_dir_t value, lv_style_selector_t selector);
void lv_obj_set_style_bg_main_stop(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_bg_grad_stop(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_bg_main_opa(lv_obj_t * obj, lv_opa_t value, lv_style_selector_t selector);
void lv_obj_set_style_bg_grad_opa(lv_obj_t * obj, lv_opa_t value, lv_style_selector_t selector);
void lv_obj_set_style_bg_grad(lv_obj_t * obj, const lv_grad_dsc_t * value, lv_style_selector_t selector);
void lv_obj_set_style_bg_image_src(lv_obj_t * obj, const void * value, lv_style_selector_t selector);
void lv_obj_set_style_bg_image_opa(lv_obj_t * obj, lv_opa_t value, lv_style_selector_t selector);
void lv_obj_set_style_bg_image_recolor(lv_obj_t * obj, lv_color_t value, lv_style_selector_t selector);
void lv_obj_set_style_bg_image_recolor_opa(lv_obj_t * obj, lv_opa_t value, lv_style_selector_t selector);
void lv_obj_set_style_bg_image_tiled(lv_obj_t * obj, bool value, lv_style_selector_t selector);
void lv_obj_set_style_border_color(lv_obj_t * obj, lv_color_t value, lv_style_selector_t selector);
void lv_obj_set_style_border_opa(lv_obj_t * obj, lv_opa_t value, lv_style_selector_t selector);
void lv_obj_set_style_border_width(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_border_side(lv_obj_t * obj, lv_border_side_t value, lv_style_selector_t selector);
void lv_obj_set_style_border_post(lv_obj_t * obj, bool value, lv_style_selector_t selector);
void lv_obj_set_style_outline_width(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_outline_color(lv_obj_t * obj, lv_color_t value, lv_style_selector_t selector);
void lv_obj_set_style_outline_opa(lv_obj_t * obj, lv_opa_t value, lv_style_selector_t selector);
void lv_obj_set_style_outline_pad(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_shadow_width(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_shadow_offset_x(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_shadow_offset_y(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_shadow_spread(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_shadow_color(lv_obj_t * obj, lv_color_t value, lv_style_selector_t selector);
void lv_obj_set_style_shadow_opa(lv_obj_t * obj, lv_opa_t value, lv_style_selector_t selector);
void lv_obj_set_style_image_opa(lv_obj_t * obj, lv_opa_t value, lv_style_selector_t selector);
void lv_obj_set_style_image_recolor(lv_obj_t * obj, lv_color_t value, lv_style_selector_t selector);
void lv_obj_set_style_image_recolor_opa(lv_obj_t * obj, lv_opa_t value, lv_style_selector_t selector);
void lv_obj_set_style_line_width(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_line_dash_width(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_line_dash_gap(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_line_rounded(lv_obj_t * obj, bool value, lv_style_selector_t selector);
void lv_obj_set_style_line_color(lv_obj_t * obj, lv_color_t value, lv_style_selector_t selector);
void lv_obj_set_style_line_opa(lv_obj_t * obj, lv_opa_t value, lv_style_selector_t selector);
void lv_obj_set_style_arc_width(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_arc_rounded(lv_obj_t * obj, bool value, lv_style_selector_t selector);
void lv_obj_set_style_arc_color(lv_obj_t * obj, lv_color_t value, lv_style_selector_t selector);
void lv_obj_set_style_arc_opa(lv_obj_t * obj, lv_opa_t value, lv_style_selector_t selector);
void lv_obj_set_style_arc_image_src(lv_obj_t * obj, const void * value, lv_style_selector_t selector);
void lv_obj_set_style_text_color(lv_obj_t * obj, lv_color_t value, lv_style_selector_t selector);
void lv_obj_set_style_text_opa(lv_obj_t * obj, lv_opa_t value, lv_style_selector_t selector);
void lv_obj_set_style_text_font(lv_obj_t * obj, const lv_font_t * value, lv_style_selector_t selector);
void lv_obj_set_style_text_letter_space(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_text_line_space(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_text_decor(lv_obj_t * obj, lv_text_decor_t value, lv_style_selector_t selector);
void lv_obj_set_style_text_align(lv_obj_t * obj, lv_text_align_t value, lv_style_selector_t selector);
void lv_obj_set_style_radius(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
void lv_obj_set_style_clip_corner(lv_obj_t * obj, bool value, lv_style_selector_t selector);
void lv_obj_set_style_opa(lv_obj_t * obj, lv_opa_t value, lv_style_selector_t selector);
void lv_obj_set_style_opa_layered(lv_obj_t * obj, lv_opa_t value, lv_style_selector_t selector);
void lv_obj_set_style_color_filter_dsc(lv_obj_t * obj, const lv_color_filter_dsc_t * value,
                                       lv_style_selector_t selector);
void lv_obj_set_style_color_filter_opa(lv_obj_t * obj, lv_opa_t value, lv_style_selector_t selector);
void lv_obj_set_style_anim(lv_obj_t * obj, const lv_anim_t * value, lv_style_selector_t selector);
void lv_obj_set_style_anim_duration(lv_obj_t * obj, uint32_t value, lv_style_selector_t selector);
void lv_obj_set_style_transition(lv_obj_t * obj, const lv_style_transition_dsc_t * value, lv_style_selector_t selector);
void lv_obj_set_style_blend_mode(lv_obj_t * obj, lv_blend_mode_t value, lv_style_selector_t selector);
void lv_obj_set_style_layout(lv_obj_t * obj, uint16_t value, lv_style_selector_t selector);
void lv_obj_set_style_base_dir(lv_obj_t * obj, lv_base_dir_t value, lv_style_selector_t selector);
void lv_obj_set_style_bitmap_mask_src(lv_obj_t * obj, const lv_image_dsc_t * value, lv_style_selector_t selector);
#if LV_USE_FLEX
    void lv_obj_set_style_flex_flow(lv_obj_t * obj, lv_flex_flow_t value, lv_style_selector_t selector);
    void lv_obj_set_style_flex_main_place(lv_obj_t * obj, lv_flex_align_t value, lv_style_selector_t selector);
    void lv_obj_set_style_flex_cross_place(lv_obj_t * obj, lv_flex_align_t value, lv_style_selector_t selector);
    void lv_obj_set_style_flex_track_place(lv_obj_t * obj, lv_flex_align_t value, lv_style_selector_t selector);
    void lv_obj_set_style_flex_grow(lv_obj_t * obj, uint8_t value, lv_style_selector_t selector);
#endif /*LV_USE_FLEX*/

#if LV_USE_GRID
    void lv_obj_set_style_grid_column_dsc_array(lv_obj_t * obj, const int32_t * value, lv_style_selector_t selector);
    void lv_obj_set_style_grid_column_align(lv_obj_t * obj, lv_grid_align_t value, lv_style_selector_t selector);
    void lv_obj_set_style_grid_row_dsc_array(lv_obj_t * obj, const int32_t * value, lv_style_selector_t selector);
    void lv_obj_set_style_grid_row_align(lv_obj_t * obj, lv_grid_align_t value, lv_style_selector_t selector);
    void lv_obj_set_style_grid_cell_column_pos(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
    void lv_obj_set_style_grid_cell_x_align(lv_obj_t * obj, lv_grid_align_t value, lv_style_selector_t selector);
    void lv_obj_set_style_grid_cell_column_span(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
    void lv_obj_set_style_grid_cell_row_pos(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
    void lv_obj_set_style_grid_cell_y_align(lv_obj_t * obj, lv_grid_align_t value, lv_style_selector_t selector);
    void lv_obj_set_style_grid_cell_row_span(lv_obj_t * obj, int32_t value, lv_style_selector_t selector);
#endif /*LV_USE_GRID*/


#endif /* LV_OBJ_STYLE_GEN_H */
