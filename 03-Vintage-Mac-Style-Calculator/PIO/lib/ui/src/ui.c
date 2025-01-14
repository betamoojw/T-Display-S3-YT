// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: Calculator

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t *ui_Screen1;
lv_obj_t *ui_img_bg;
lv_obj_t *ui_lbl_title;
lv_obj_t *ui_pnl_close;
lv_obj_t *ui_png_answer;
lv_obj_t *ui_lbl_answer;
lv_obj_t *ui_img_pad_bg;
lv_obj_t *ui_pad_c;
lv_obj_t *ui_Label3;
lv_obj_t *ui_pad_eql_s;
lv_obj_t *ui_Label1;
lv_obj_t *ui_pad_dev;
lv_obj_t *ui_Label2;
lv_obj_t *ui_pad_multy;
lv_obj_t *ui_Label4;
lv_obj_t *ui_pad_minus;
lv_obj_t *ui_Label5;
lv_obj_t *ui_pad_9;
lv_obj_t *ui_Label6;
lv_obj_t *ui_pad_8;
lv_obj_t *ui_Label7;
lv_obj_t *ui_pad_7;
lv_obj_t *ui_Label8;
lv_obj_t *ui_pad_4;
lv_obj_t *ui_Label9;
lv_obj_t *ui_pad_5;
lv_obj_t *ui_Label10;
lv_obj_t *ui_pad_6;
lv_obj_t *ui_Label11;
lv_obj_t *ui_pad_plus;
lv_obj_t *ui_Label12;
lv_obj_t *ui_pad_1;
lv_obj_t *ui_Label13;
lv_obj_t *ui_pad_2;
lv_obj_t *ui_Label14;
lv_obj_t *ui_pad_3;
lv_obj_t *ui_Label15;
lv_obj_t *ui_pad_eql_b;
lv_obj_t *ui_Label18;
lv_obj_t *ui_pad_0_b;
lv_obj_t *ui_Label17;
lv_obj_t *ui_pad_dot;
lv_obj_t *ui_Label16;
lv_obj_t *ui_pnl_selected;
lv_obj_t *ui____initial_actions0;
const lv_img_dsc_t *ui_imgset_1429673789[1] = {&ui_img_1548360417};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////

void ui_init( void )
{LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), true, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Screen1_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_Screen1);
}
