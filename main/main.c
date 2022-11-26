#include <stdio.h>
#include "esp_log.h"
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define LED_PIN GPIO_NUM_2

uint32_t status;

void app_main(void)
{
  gpio_reset_pin(LED_PIN);
  gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);
  int counter = 0;
  while (true)
  {
    status = !status;
    gpio_set_level(LED_PIN, status);

    ESP_LOGI("counter", "%d", counter);
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    counter++;
  }
}
