#include <stdio.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
  int counter = 0;
  while (true)
  {
    ESP_LOGI("counter", "%d", counter);
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    counter++;
  }
}
