// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: Elecrow3_5_RGB_TFT

#include "../ui.h"

void ui_sldMainSlider_screen_init(void)
{
    ui_sldMainSlider = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_sldMainSlider, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_sldMainSlider, &ui_img_blankpgbkgnd_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblElecrowtitle = lv_label_create(ui_sldMainSlider);
    lv_obj_set_width(ui_lblElecrowtitle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblElecrowtitle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblElecrowtitle, -1);
    lv_obj_set_y(ui_lblElecrowtitle, -109);
    lv_obj_set_align(ui_lblElecrowtitle, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblElecrowtitle, "ELECROW\nTFT");
    lv_obj_set_style_text_color(ui_lblElecrowtitle, lv_color_hex(0xF3F3F3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblElecrowtitle, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblElecrowtitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblElecrowtitle, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnMainButton = lv_btn_create(ui_sldMainSlider);
    lv_obj_set_width(ui_btnMainButton, 121);
    lv_obj_set_height(ui_btnMainButton, 69);
    lv_obj_set_x(ui_btnMainButton, 1);
    lv_obj_set_y(ui_btnMainButton, 8);
    lv_obj_set_align(ui_btnMainButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnMainButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnMainButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_lblBtnMain = lv_label_create(ui_btnMainButton);
    lv_obj_set_width(ui_lblBtnMain, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblBtnMain, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_lblBtnMain, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblBtnMain, "BUTTON");

    ui_Slider1 = lv_slider_create(ui_sldMainSlider);
    lv_obj_set_width(ui_Slider1, 214);
    lv_obj_set_height(ui_Slider1, 25);
    lv_obj_set_x(ui_Slider1, 0);
    lv_obj_set_y(ui_Slider1, 157);
    lv_obj_set_align(ui_Slider1, LV_ALIGN_CENTER);

    ui_lblSlider = lv_label_create(ui_sldMainSlider);
    lv_obj_set_width(ui_lblSlider, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblSlider, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblSlider, 0);
    lv_obj_set_y(ui_lblSlider, 109);
    lv_obj_set_align(ui_lblSlider, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblSlider, "Slider");
    lv_obj_set_style_text_color(ui_lblSlider, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblSlider, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblSlider, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_btnMainButton, ui_event_btnMainButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Slider1, ui_event_Slider1, LV_EVENT_ALL, NULL);

}