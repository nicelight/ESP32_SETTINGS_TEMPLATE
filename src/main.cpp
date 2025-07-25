#include <Arduino.h>
#include "globals.h"
#include "led.h"
#include "timer.h"

// обявление глобальных globals.h
uint32_t g_lora_h = 0;

void setup() {
    Serial.begin(115200);
    Serial.println();

    sett_begin();

    // из settings.h доступны db и ключи
    Serial.println(db[kk::wifi_ssid]);
}

void loop() {
    sett_loop();

}
