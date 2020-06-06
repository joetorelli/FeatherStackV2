#include <Arduino.h>
#include "OLED.h"
//#include "settings.h"
//#include "sensor_readings.h"

//read and display button press
void DisplaySwitches(Adafruit_SSD1306 *Disp, OLED_SW *SS)
{ //line 1
    Disp->print("ButA:");
    if (SS->Switch_A == 0)
    {
        Disp->print("0");
    }
    else
    {
        Disp->print("A");
    }

    Disp->print(" ButB:");
    if (SS->Switch_B == 0)
    {
        Disp->print("0");
    }
    else
    {
        Disp->print("B");
    }

    Disp->print(" ButC:");
    if (SS->Switch_C == 0)
    {
        Disp->print("0");
    }
    else
    {
        Disp->print("C");
    }
}

void OLED_Time(Adafruit_SSD1306 *Disp, DateTime *RTCClk)
{ //line 2

    Disp->println();
    if (RTCClk->hour() < 10)
    {
        Disp->print('0');
    }
    Disp->print(RTCClk->hour(), DEC);

    Disp->print(':');

    if (RTCClk->minute() < 10)
    {
        Disp->print('0');
    }
    Disp->print(RTCClk->minute(), DEC);

    Disp->print(':');

    if (RTCClk->second() < 10)
    {
        Disp->print('0');
    }
    Disp->print(RTCClk->second(), DEC);
}

void OLED_Date(Adafruit_SSD1306 *Disp, DateTime *RTCClk)
{ //line 2
    Disp->print(" ");
    if (RTCClk->day() < 10)
    {
        Disp->print('0');
    }
    Disp->print(RTCClk->day(), DEC);

    Disp->print('/');

    if (RTCClk->month() < 10)
    {
        Disp->print('0');
    }
    Disp->print(RTCClk->month(), DEC);

    Disp->print('/');

    if (RTCClk->year() < 10)
    {
        Disp->print('0');
    }
    Disp->println(RTCClk->year(), DEC);
}

void OLED_Day(Adafruit_SSD1306 *Disp, DateTime *RTCClk)

{
    char daysOfTheWeek[7][12] = {" Sunday", " Monday", " Tuesday", " Wednesday", " Thursday", " Friday", " Saturday"};
    Disp->print(daysOfTheWeek[RTCClk->dayOfTheWeek()]);
}

void DisplaySensor(Adafruit_SSD1306 *Disp, BME_Sensor *SenVal) //Adafruit_BME280 *bme)
{                                                              //line 3
    Disp->println();
    //digitalWrite(UpdateLED, HIGH);

    // Temperature
    //print to serial port
    DEBUGPRINT(SenVal->f_temperature);
    DEBUGPRINTLN(" °C ");

    Disp->print(SenVal->f_temperature);
    Disp->print("C ");

    // Humidity
    //print to serial port
    DEBUGPRINT(SenVal->f_humidity);
    DEBUGPRINTLN("%");

    Disp->print(SenVal->f_humidity);
    Disp->print("% ");
    /*
    // Pressure
    //print to serial port
    DEBUGPRINT(SenVal->f_pressure);
    DEBUGPRINTLN(" hPa");

    Disp->print(SenVal->f_pressure);
    Disp->println("hpa ");

    // Appx altitude
    //print to serial port
    DEBUGPRINT(SenVal->f_altitude);
    DEBUGPRINTLN(" m");

    Disp->print(SenVal->f_altitude);
    Disp->println("m ");
*/
    //  ******  Send Data to AdaIO   ******
    //Temp->save(f_temperature);
    // Hum->save(f_humidity);
    //LEDControl->save(IFTTT_Flag);
    //Pres->save(f_pressure);
    //Alt->save(f_altitude);

    //update AdaIO count
    //DisplayTheCount(OLED_Display);

    //digitalWrite(UpdateLED, LOW);
    //print to serial port
    //DEBUGPRINTLN("-----v2----");
}
