#include <core/lv_obj.h>
#ifndef __SETTINGS_H
  #define __SETTINGS_H

  #include "esp_system.h"
  #include "nvs_flash.h"

// Function to initialize NVS
esp_err_t init_nvs();

// Function to write an integer to NVS
esp_err_t nvs_write_int(const char *key, int32_t value);

// Function to read an integer from NVS
esp_err_t nvs_read_int(const char *key, int32_t *value);

#endif