// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: PubRemote

#include "ui.h"

void ui_BMSScreen_screen_init(void)
{
    ui_BMSScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_BMSScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_add_event_cb(ui_BMSScreen, scr_unloaded_delete_cb, LV_EVENT_SCREEN_UNLOADED, &ui_BMSScreen);
    lv_obj_set_style_text_font(ui_BMSScreen, &ui_font_Inter_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BMSContent = lv_obj_create(ui_BMSScreen);
    lv_obj_remove_style_all(ui_BMSContent);
    lv_obj_set_width(ui_BMSContent, lv_pct(100));
    lv_obj_set_height(ui_BMSContent, lv_pct(100));
    lv_obj_set_align(ui_BMSContent, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_BMSContent, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_BMSContent, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_BMSContent, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_text_font(ui_BMSContent, &ui_font_Inter_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BMSHeader = lv_obj_create(ui_BMSContent);
    lv_obj_remove_style_all(ui_BMSHeader);
    lv_obj_set_width(ui_BMSHeader, lv_pct(100));
    lv_obj_set_height(ui_BMSHeader, lv_pct(20));
    lv_obj_set_align(ui_BMSHeader, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_BMSHeader, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_BMSHeaderLabel = lv_label_create(ui_BMSHeader);
    lv_obj_set_width(ui_BMSHeaderLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BMSHeaderLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BMSHeaderLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BMSHeaderLabel, "BMS Info");
    lv_obj_set_style_text_decor(ui_BMSHeaderLabel, LV_TEXT_DECOR_UNDERLINE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BMSHeaderLabel, &ui_font_Inter_Bold_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BMSBody = lv_obj_create(ui_BMSContent);
    lv_obj_remove_style_all(ui_BMSBody);
    lv_obj_set_width(ui_BMSBody, lv_pct(100));
    lv_obj_set_height(ui_BMSBody, lv_pct(55));
    lv_obj_set_align(ui_BMSBody, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_BMSBody, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_BMSBody, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_BMSBody, LV_OBJ_FLAG_OVERFLOW_VISIBLE);     /// Flags
    lv_obj_clear_flag(ui_BMSBody, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_pad_left(ui_BMSBody, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_BMSBody, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_BMSBody, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_BMSBody, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_BMSBody, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_BMSBody, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BMSGroupHeadingLabel = lv_label_create(ui_BMSBody);
    lv_obj_set_width(ui_BMSGroupHeadingLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BMSGroupHeadingLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BMSGroupHeadingLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BMSGroupHeadingLabel, "Voltages");

    ui_BMSDataLine = lv_obj_create(ui_BMSBody);
    lv_obj_remove_style_all(ui_BMSDataLine);
    lv_obj_set_width(ui_BMSDataLine, lv_pct(100));
    lv_obj_set_height(ui_BMSDataLine, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BMSDataLine, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_BMSDataLine, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_BMSDataLine, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_BMSDataLine, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_BMSDataLabel = lv_label_create(ui_BMSDataLine);
    lv_obj_set_width(ui_BMSDataLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BMSDataLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BMSDataLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BMSDataLabel, "1");
    lv_obj_set_style_text_font(ui_BMSDataLabel, &ui_font_Inter_Bold_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BMSDataBar = lv_obj_create(ui_BMSDataLine);
    lv_obj_remove_style_all(ui_BMSDataBar);
    lv_obj_set_height(ui_BMSDataBar, 20);
    lv_obj_set_width(ui_BMSDataBar, lv_pct(85));
    lv_obj_set_align(ui_BMSDataBar, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_BMSDataBar, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_BMSDataBar, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_BMSDataBar, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BMSDataBar, lv_color_hex(0x373737), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BMSDataBar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BMSDataValueBar = lv_obj_create(ui_BMSDataBar);
    lv_obj_remove_style_all(ui_BMSDataValueBar);
    lv_obj_set_width(ui_BMSDataValueBar, lv_pct(50));
    lv_obj_set_height(ui_BMSDataValueBar, lv_pct(100));
    lv_obj_set_align(ui_BMSDataValueBar, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_BMSDataValueBar, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BMSDataValueBar, lv_color_hex(0x9F3A3A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BMSDataValueBar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BMSDataValueLabel = lv_label_create(ui_BMSDataValueBar);
    lv_obj_set_width(ui_BMSDataValueLabel, lv_pct(100));
    lv_obj_set_height(ui_BMSDataValueLabel, lv_pct(100));
    lv_obj_set_align(ui_BMSDataValueLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BMSDataValueLabel, "1.0V");
    lv_obj_add_flag(ui_BMSDataValueLabel, LV_OBJ_FLAG_FLOATING);     /// Flags
    lv_obj_set_style_text_align(ui_BMSDataValueLabel, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BMSDataValueLabel, &ui_font_Inter_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_BMSDataValueLabel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_BMSDataValueLabel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_BMSDataValueLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_BMSDataValueLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BMSFooter = lv_obj_create(ui_BMSContent);
    lv_obj_remove_style_all(ui_BMSFooter);
    lv_obj_set_width(ui_BMSFooter, lv_pct(100));
    lv_obj_set_height(ui_BMSFooter, lv_pct(25));
    lv_obj_set_align(ui_BMSFooter, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_BMSFooter, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_BMSFooter, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_BMSFooter, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_row(ui_BMSFooter, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_BMSFooter, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BMSMainActionButton = lv_btn_create(ui_BMSFooter);
    lv_obj_set_width(ui_BMSMainActionButton, 80);
    lv_obj_set_height(ui_BMSMainActionButton, 42);
    lv_obj_set_align(ui_BMSMainActionButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BMSMainActionButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BMSMainActionButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_text_font(ui_BMSMainActionButton, &ui_font_Inter_Bold_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BMSMainActionButtonLabel = lv_label_create(ui_BMSMainActionButton);
    lv_obj_set_width(ui_BMSMainActionButtonLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BMSMainActionButtonLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BMSMainActionButtonLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BMSMainActionButtonLabel, "Back");

    lv_obj_add_event_cb(ui_BMSMainActionButton, ui_event_BMSMainActionButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BMSScreen, ui_event_BMSScreen, LV_EVENT_ALL, NULL);

}
