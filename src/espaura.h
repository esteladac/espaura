/*
 * A modular and efficient firmware for an ESP-based Ambilight system.
 * Designed for compatibility with HyperHDR via the Adalight protocol.
 * Allows manual configuration through serial commands and future WiFi support.
 * 
 * Developed by Esteladac | ESPAura Project
*/

#ifndef ESPAURA_H
#define ESPAURA_H

#define VERSION "1.0.0"
#define VERSION_DATE 000000

// #define DISABLE_EEPROM
// #define DISABLE_FS
// #define DISABLE_WIFI
// #define DISABLE_MQTT

#define FASTLED_INTERNAL // Disable FastLED's internal debugging

#include "Arduino.h"
#if defined(ESP8266)
    #pragma message("📦 Compiling for ESP8266")
    #include "esp8266.h"
#elif defined(ESP32)
    #pragma message("📦 Compiling for ESP32")
    #include "esp32.h"
#elif defined(ARDUINO_AVR_UNO)
    #pragma message("📦 Compiling for Arduino Uno")
    #include "uno.h"
#elif defined(ARDUINO_AVR_NANO)
    #pragma message("📦 Compiling for Arduino Nano")
    #include "nano.h"
#else
    #pragma message("📦 Compiling for Unknown Board, switching to default")
#endif

#endif
