#include <Arduino.h>
#include "sets.h"
#include "led.h"
#include "timer.h"
#include "nastroyki.h"


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