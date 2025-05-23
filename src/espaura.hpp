#pragma once

#include "Arduino.h"

#if defined(ESP8266)
  #pragma message "Compiling for ESP8266"
  #define SERIAL_RATE 921600
#elif defined(ESP32)
  #pragma message "Compiling for ESP32"
  #define SERIAL_RATE 921600
#else
  #pragma message "Compiling for default Arduino board"
  #define SERIAL_RATE 115200
#endif