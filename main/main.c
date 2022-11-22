#include <stdio.h>
#include "esp_log.h"

const char *tagTraffic = "交通灯";

bool secretLog = true;

void app_main(void)
{
  if (secretLog)
  {
    esp_log_level_set(tagTraffic, ESP_LOG_VERBOSE);
  }
  ESP_LOGE(tagTraffic, "不亮了");

  ESP_LOGW(tagTraffic, "寿命还剩%i%%", 5);

  ESP_LOGI(tagTraffic, "亮绿灯");

  ESP_LOGD(tagTraffic, "DEBUG");

  ESP_LOGV(tagTraffic, "VERBOSE");
}
