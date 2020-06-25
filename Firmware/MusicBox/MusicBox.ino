#include "MusicBoxPower.h"

MusicBoxPower pwr;

void setup() {
  pwr.begin();

}

void loop() {
  bool chrgStatus = pwr.isCharging();
  uint16_t voltage = pwr.getBatteryVoltage();

}
