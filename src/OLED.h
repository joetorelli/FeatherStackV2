#ifndef OLED_H

#define OLED_H
#include <Arduino.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
#include "RTClib.h"
#include "settings.h"
#include "sensor_readings.h"
#include <Adafruit_BME280.h>
//#include "ezTime.h"

/******************   OLED_Display  *******************/
#define SCREEN_WIDTH 128 //  OLED_Display width, in pixels
#define SCREEN_HEIGHT 32 //  OLED_Display height, in pixels

#define OLED_RESET -1 // Reset pin # (or -1 if sharing Arduino reset pin)

#endif

void DisplaySensor(Adafruit_SSD1306 *Disp, BME_Sensor *SenVal);
void DisplaySwitches(Adafruit_SSD1306 *Disp, OLED_SW *SwState);

void OLED_Time(Adafruit_SSD1306 *Disp, DateTime *RTCClk);
void OLED_Date(Adafruit_SSD1306 *Disp, DateTime *RTCClk);
void OLED_Day(Adafruit_SSD1306 *Disp, DateTime *RTCClk);
