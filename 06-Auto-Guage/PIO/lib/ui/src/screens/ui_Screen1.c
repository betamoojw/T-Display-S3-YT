// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: Bike_dashboard

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x202020), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_src( ui_Screen1, &ui_img_images_bg_png, LV_PART_MAIN | LV_STATE_DEFAULT );

ui_img_guage_bg = lv_img_create(ui_Screen1);
lv_img_set_src(ui_img_guage_bg, &ui_img_images_guage_bg_png);
lv_obj_set_width( ui_img_guage_bg, LV_SIZE_CONTENT);  /// 299
lv_obj_set_height( ui_img_guage_bg, LV_SIZE_CONTENT);   /// 84
lv_obj_set_x( ui_img_guage_bg, 11 );
lv_obj_set_y( ui_img_guage_bg, 54 );
lv_obj_add_flag( ui_img_guage_bg, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_img_guage_bg, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_compass = lv_img_create(ui_Screen1);
lv_img_set_src(ui_compass, &ui_img_images_compas_png);
lv_obj_set_width( ui_compass, LV_SIZE_CONTENT);  /// 283
lv_obj_set_height( ui_compass, LV_SIZE_CONTENT);   /// 12
lv_obj_set_x( ui_compass, -20 );
lv_obj_set_y( ui_compass, 5 );
lv_obj_add_flag( ui_compass, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_compass, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_compass_overlay = lv_img_create(ui_Screen1);
lv_img_set_src(ui_compass_overlay, &ui_img_images_compass_overlay_png);
lv_obj_set_width( ui_compass_overlay, LV_SIZE_CONTENT);  /// 320
lv_obj_set_height( ui_compass_overlay, LV_SIZE_CONTENT);   /// 18
lv_obj_add_flag( ui_compass_overlay, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_compass_overlay, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_img_devider = lv_img_create(ui_Screen1);
lv_img_set_src(ui_img_devider, &ui_img_images_devider_png);
lv_obj_set_width( ui_img_devider, LV_SIZE_CONTENT);  /// 96
lv_obj_set_height( ui_img_devider, LV_SIZE_CONTENT);   /// 24
lv_obj_add_flag( ui_img_devider, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_img_devider, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_cont_speed_num = lv_obj_create(ui_Screen1);
lv_obj_remove_style_all(ui_cont_speed_num);
lv_obj_set_width( ui_cont_speed_num, 320);
lv_obj_set_height( ui_cont_speed_num, 170);
lv_obj_set_x( ui_cont_speed_num, 0 );
lv_obj_set_y( ui_cont_speed_num, 4 );
lv_obj_clear_flag( ui_cont_speed_num, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_speed_num = lv_label_create(ui_cont_speed_num);
lv_obj_set_width( ui_speed_num, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_speed_num, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_speed_num, -142 );
lv_obj_set_y( ui_speed_num, 31 );
lv_obj_set_align( ui_speed_num, LV_ALIGN_CENTER );
lv_label_set_text(ui_speed_num,"0");
lv_obj_set_style_text_font(ui_speed_num, &ui_font_Hollow22, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_speed_num1 = lv_label_create(ui_cont_speed_num);
lv_obj_set_width( ui_speed_num1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_speed_num1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_speed_num1, -119 );
lv_obj_set_y( ui_speed_num1, 31 );
lv_obj_set_align( ui_speed_num1, LV_ALIGN_CENTER );
lv_label_set_text(ui_speed_num1,"2");
lv_obj_set_style_text_font(ui_speed_num1, &ui_font_Hollow22, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_speed_num2 = lv_label_create(ui_cont_speed_num);
lv_obj_set_width( ui_speed_num2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_speed_num2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_speed_num2, -91 );
lv_obj_set_y( ui_speed_num2, 29 );
lv_obj_set_align( ui_speed_num2, LV_ALIGN_CENTER );
lv_label_set_text(ui_speed_num2,"4");
lv_obj_set_style_text_font(ui_speed_num2, &ui_font_Hollow22, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_speed_num3 = lv_label_create(ui_cont_speed_num);
lv_obj_set_width( ui_speed_num3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_speed_num3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_speed_num3, -60 );
lv_obj_set_y( ui_speed_num3, 18 );
lv_obj_set_align( ui_speed_num3, LV_ALIGN_CENTER );
lv_label_set_text(ui_speed_num3,"6");
lv_obj_set_style_text_font(ui_speed_num3, &ui_font_Hollow22, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_speed_num4 = lv_label_create(ui_cont_speed_num);
lv_obj_set_width( ui_speed_num4, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_speed_num4, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_speed_num4, -29 );
lv_obj_set_y( ui_speed_num4, 4 );
lv_obj_set_align( ui_speed_num4, LV_ALIGN_CENTER );
lv_label_set_text(ui_speed_num4,"8");
lv_obj_set_style_text_font(ui_speed_num4, &ui_font_Hollow22, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_speed_num5 = lv_label_create(ui_cont_speed_num);
lv_obj_set_width( ui_speed_num5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_speed_num5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_speed_num5, 3 );
lv_obj_set_y( ui_speed_num5, -8 );
lv_obj_set_align( ui_speed_num5, LV_ALIGN_CENTER );
lv_label_set_text(ui_speed_num5,"10");
lv_obj_set_style_text_font(ui_speed_num5, &ui_font_Hollow22, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_speed_num6 = lv_label_create(ui_cont_speed_num);
lv_obj_set_width( ui_speed_num6, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_speed_num6, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_speed_num6, 30 );
lv_obj_set_y( ui_speed_num6, -21 );
lv_obj_set_align( ui_speed_num6, LV_ALIGN_CENTER );
lv_label_set_text(ui_speed_num6,"12");
lv_obj_set_style_text_color(ui_speed_num6, lv_color_hex(0xFFAA00), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_speed_num6, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_speed_num6, &ui_font_Hollow22, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_speed_num7 = lv_label_create(ui_cont_speed_num);
lv_obj_set_width( ui_speed_num7, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_speed_num7, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_speed_num7, 57 );
lv_obj_set_y( ui_speed_num7, -33 );
lv_obj_set_align( ui_speed_num7, LV_ALIGN_CENTER );
lv_label_set_text(ui_speed_num7,"14");
lv_obj_set_style_text_color(ui_speed_num7, lv_color_hex(0xFFAA00), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_speed_num7, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_speed_num7, &ui_font_Hollow22, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_speed_num8 = lv_label_create(ui_cont_speed_num);
lv_obj_set_width( ui_speed_num8, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_speed_num8, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_speed_num8, 84 );
lv_obj_set_y( ui_speed_num8, -41 );
lv_obj_set_align( ui_speed_num8, LV_ALIGN_CENTER );
lv_label_set_text(ui_speed_num8,"16");
lv_obj_set_style_text_color(ui_speed_num8, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_speed_num8, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_speed_num8, &ui_font_Hollow22, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_speed_num9 = lv_label_create(ui_cont_speed_num);
lv_obj_set_width( ui_speed_num9, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_speed_num9, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_speed_num9, 112 );
lv_obj_set_y( ui_speed_num9, -46 );
lv_obj_set_align( ui_speed_num9, LV_ALIGN_CENTER );
lv_label_set_text(ui_speed_num9,"18");
lv_obj_set_style_text_color(ui_speed_num9, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_speed_num9, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_speed_num9, &ui_font_Hollow22, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_speed_num10 = lv_label_create(ui_cont_speed_num);
lv_obj_set_width( ui_speed_num10, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_speed_num10, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_speed_num10, 141 );
lv_obj_set_y( ui_speed_num10, -47 );
lv_obj_set_align( ui_speed_num10, LV_ALIGN_CENTER );
lv_label_set_text(ui_speed_num10,"20");
lv_obj_set_style_text_color(ui_speed_num10, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_speed_num10, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_speed_num10, &ui_font_Hollow22, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_slider_speed = lv_slider_create(ui_Screen1);
lv_slider_set_range(ui_slider_speed, 0,200);
lv_obj_set_width( ui_slider_speed, 298);
lv_obj_set_height( ui_slider_speed, 84);
lv_obj_set_x( ui_slider_speed, 12 );
lv_obj_set_y( ui_slider_speed, 55 );
lv_obj_set_style_radius(ui_slider_speed, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_slider_speed, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_slider_speed, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_radius(ui_slider_speed, 0, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_slider_speed, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_slider_speed, 0, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_src( ui_slider_speed, &ui_img_images_guage_indicator_png, LV_PART_INDICATOR | LV_STATE_DEFAULT );

lv_obj_set_style_radius(ui_slider_speed, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_slider_speed, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_slider_speed, 0, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_lbl_speed = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_lbl_speed, 122);
lv_obj_set_height( ui_lbl_speed, 68);
lv_obj_set_x( ui_lbl_speed, -88 );
lv_obj_set_y( ui_lbl_speed, -34 );
lv_obj_set_align( ui_lbl_speed, LV_ALIGN_CENTER );
lv_label_set_text(ui_lbl_speed,"0");
lv_obj_set_style_text_font(ui_lbl_speed, &ui_font_Hollow85, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_lbl_speed1 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_lbl_speed1, 49);
lv_obj_set_height( ui_lbl_speed1, 19);
lv_obj_set_x( ui_lbl_speed1, -122 );
lv_obj_set_y( ui_lbl_speed1, 10 );
lv_obj_set_align( ui_lbl_speed1, LV_ALIGN_CENTER );
lv_label_set_text(ui_lbl_speed1,"km/h");
lv_obj_set_style_text_color(ui_lbl_speed1, lv_color_hex(0x7D7D7D), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_lbl_speed1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_lbl_speed1, &ui_font_Hollow22, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_lbl_trip_value = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_lbl_trip_value, 36);
lv_obj_set_height( ui_lbl_trip_value, 15);
lv_obj_set_x( ui_lbl_trip_value, -99 );
lv_obj_set_y( ui_lbl_trip_value, 72 );
lv_obj_set_align( ui_lbl_trip_value, LV_ALIGN_CENTER );
lv_label_set_text(ui_lbl_trip_value,"0");
lv_obj_set_style_text_align(ui_lbl_trip_value, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_lbl_trip_value, &ui_font_Inter12, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_lbl_trip = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_lbl_trip, 36);
lv_obj_set_height( ui_lbl_trip, 15);
lv_obj_set_x( ui_lbl_trip, -130 );
lv_obj_set_y( ui_lbl_trip, 72 );
lv_obj_set_align( ui_lbl_trip, LV_ALIGN_CENTER );
lv_label_set_text(ui_lbl_trip,"Trip:");
lv_obj_set_style_text_align(ui_lbl_trip, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_lbl_trip, &ui_font_Inter12, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_lbl_battery_value = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_lbl_battery_value, 35);
lv_obj_set_height( ui_lbl_battery_value, 13);
lv_obj_set_x( ui_lbl_battery_value, 105 );
lv_obj_set_y( ui_lbl_battery_value, -75 );
lv_obj_set_align( ui_lbl_battery_value, LV_ALIGN_CENTER );
lv_label_set_text(ui_lbl_battery_value,"0%");
lv_obj_set_style_text_align(ui_lbl_battery_value, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_lbl_battery_value, &ui_font_Inter12, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_roller_mode = lv_roller_create(ui_Screen1);
lv_roller_set_options( ui_roller_mode, "Eco\nNormal\nSport\nHyper", LV_ROLLER_MODE_NORMAL );
lv_obj_set_width( ui_roller_mode, 59);
lv_obj_set_height( ui_roller_mode, 23);
lv_obj_set_x( ui_roller_mode, 122 );
lv_obj_set_y( ui_roller_mode, 67 );
lv_obj_set_align( ui_roller_mode, LV_ALIGN_CENTER );
lv_obj_set_style_text_color(ui_roller_mode, lv_color_hex(0xC4C4C4), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_roller_mode, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_roller_mode, &ui_font_Hollow22, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_roller_mode, 3, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_roller_mode, lv_color_hex(0x4A4A4A), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_roller_mode, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_roller_mode, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_roller_mode, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_text_color(ui_roller_mode, lv_color_hex(0xCACACA), LV_PART_SELECTED | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_roller_mode, 255, LV_PART_SELECTED| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_roller_mode, LV_TEXT_ALIGN_CENTER, LV_PART_SELECTED| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_roller_mode, lv_color_hex(0xFFFFFF), LV_PART_SELECTED | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_roller_mode, 0, LV_PART_SELECTED| LV_STATE_DEFAULT);

ui_slider_range = lv_slider_create(ui_Screen1);
lv_obj_set_width( ui_slider_range, 199);
lv_obj_set_height( ui_slider_range, 20);
lv_obj_set_x( ui_slider_range, 48 );
lv_obj_set_y( ui_slider_range, 50 );
lv_obj_set_align( ui_slider_range, LV_ALIGN_CENTER );
lv_obj_set_style_radius(ui_slider_range, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_slider_range, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_slider_range, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_src( ui_slider_range, &ui_img_images_range_bg_png, LV_PART_MAIN | LV_STATE_DEFAULT );

lv_obj_set_style_radius(ui_slider_range, 0, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_slider_range, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_slider_range, 0, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_set_style_radius(ui_slider_range, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_slider_range, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_slider_range, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_src( ui_slider_range, &ui_img_images_range_knob_png, LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_pad_left(ui_slider_range, -25, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_slider_range, 50, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_slider_range, 2, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_slider_range, -12, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_bar_battery = lv_bar_create(ui_Screen1);
lv_obj_set_width( ui_bar_battery, 21);
lv_obj_set_height( ui_bar_battery, 10);
lv_obj_set_x( ui_bar_battery, 138 );
lv_obj_set_y( ui_bar_battery, -73 );
lv_obj_set_align( ui_bar_battery, LV_ALIGN_CENTER );
lv_obj_set_style_radius(ui_bar_battery, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_bar_battery, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_bar_battery, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_radius(ui_bar_battery, 0, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_bar_battery, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_bar_battery, 0, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_src( ui_bar_battery, &ui_img_images_battery_indicator_png, LV_PART_INDICATOR | LV_STATE_DEFAULT );

ui_img_battery = lv_img_create(ui_Screen1);
lv_img_set_src(ui_img_battery, &ui_img_images_battery_bg_png);
lv_obj_set_width( ui_img_battery, LV_SIZE_CONTENT);  /// 24
lv_obj_set_height( ui_img_battery, LV_SIZE_CONTENT);   /// 13
lv_obj_set_x( ui_img_battery, 287 );
lv_obj_set_y( ui_img_battery, 6 );
lv_obj_add_flag( ui_img_battery, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_img_battery, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_lbl_range1 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_lbl_range1, 44);
lv_obj_set_height( ui_lbl_range1, 19);
lv_obj_set_x( ui_lbl_range1, 66 );
lv_obj_set_y( ui_lbl_range1, 26 );
lv_obj_set_align( ui_lbl_range1, LV_ALIGN_CENTER );
lv_label_set_text(ui_lbl_range1,"range");
lv_obj_set_style_text_color(ui_lbl_range1, lv_color_hex(0x7D7D7D), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_lbl_range1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_lbl_range1, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_lbl_range1, &ui_font_Hollow18, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_lbl_range = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_lbl_range, 49);
lv_obj_set_height( ui_lbl_range, 32);
lv_obj_set_x( ui_lbl_range, 116 );
lv_obj_set_y( ui_lbl_range, 19 );
lv_obj_set_align( ui_lbl_range, LV_ALIGN_CENTER );
lv_label_set_text(ui_lbl_range,"0");
lv_obj_set_style_text_color(ui_lbl_range, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_lbl_range, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_lbl_range, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_lbl_range, &ui_font_Hollow38, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_slider_speed, ui_event_slider_speed, LV_EVENT_ALL, NULL);

}