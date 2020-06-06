#include "SD.h"
#include "RTClib.h"
//#include <Adafruit_Sensor.h>
//#include <Adafruit_BME280.h>

void listDir(fs::FS &fs, const char *dirname, uint8_t levels);

void createDir(fs::FS &fs, const char *path);

void removeDir(fs::FS &fs, const char *path);

void readFile(fs::FS &fs, const char *path);

void writeFile(fs::FS &fs, const char *path, const char *message);

void appendFile(fs::FS &fs, const char *path, const char *message);

void renameFile(fs::FS &fs, const char *path1, const char *path2);

void deleteFile(fs::FS &fs, const char *path);

//void Refresh_SD(DateTime *RTCClock, Adafruit_BME280 *bme);
