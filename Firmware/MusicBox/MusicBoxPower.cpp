#include "MusicBoxPower.h"

const uint8_t chrgPin = 27;
const uint8_t battPin = A4;
const uint8_t gpsPwrPin = 2;

const uint16_t AREF = 3300;
const uint16_t adcResolution = 1023;


MusicBoxPower::MusicBoxPower()
{
  
}
void MusicBoxPower::begin()
{
  pinMode(chrgPin, INPUT);
  pinMode(gpsPwrPin, OUTPUT);
}
  
bool MusicBoxPower::isCharging()
{
  return !digitalRead(chrgPin);
}
uint16_t MusicBoxPower::getBatteryVoltage()
{
  uint16_t val = analogRead(battPin);
  uint16_t voltage = AREF * (val/(float)adcResolution);

  return 2*voltage;
}

void MusicBoxPower::enableGPS()
{
  digitalWrite(gpsPwrPin, HIGH);
}
void MusicBoxPower::disableGPS(){
  digitalWrite(gpsPwrPin, LOW);
}

void MusicBoxPower::enableMP3(){
  
}
void MusicBoxPower::disableMP3(){
  
}
