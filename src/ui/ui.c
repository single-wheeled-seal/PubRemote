// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: PubRemote

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_StatsScreen
void ui_StatsScreen_screen_init(void);
lv_obj_t * ui_StatsScreen;
lv_obj_t * ui_DutyCycle;
lv_obj_t * ui_LeftSensor;
lv_obj_t * ui_RightSensor;
lv_obj_t * ui_Content;
lv_obj_t * ui_Head;
lv_obj_t * ui_Logo;
lv_obj_t * ui_Time;
lv_obj_t * ui_Body;
lv_obj_t * ui_PrimaryStat;
lv_obj_t * ui_PrimaryStatUnit;
lv_obj_t * ui_SecondaryStats;
lv_obj_t * ui_ConnectionState;
lv_obj_t * ui_DistanceStats;
lv_obj_t * ui_TempStats;
lv_obj_t * ui_Footer;
void ui_event_BatteryDisplay(lv_event_t * e);
lv_obj_t * ui_BatteryDisplay;
lv_obj_t * ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_BatteryDisplay(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_LONG_PRESSED) {
        toggleFooterDisplayMode(e);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_StatsScreen_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_StatsScreen);
}
