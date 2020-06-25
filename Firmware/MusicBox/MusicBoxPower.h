#ifndef MusicBoxPower_h
#define MusicBoxPower_h

#include <Arduino.h>

class MusicBoxPower
{
private:

public:

  MusicBoxPower();
  void begin();
  
  bool isCharging();
  uint16_t getBatteryVoltage();

  void enableGPS();
  void disableGPS();

  void enableMP3();
  void disableMP3();
  
};

#endif
