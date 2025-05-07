/*
 * A modular and efficient firmware for an ESP-based Ambilight system.
 * Designed for compatibility with HyperHDR via the Adalight protocol.
 * Allows manual configuration through serial commands and future WiFi support.
 * 
 * Developed by Esteladac | ESPAura Project
*/

#ifndef ESPAURA_H
#define ESPAURA_H

// -------------------- //
// Firmware definitions //
// -------------------- //

#define VERSION "1.0.0"
#define VERSION_DATE 070522025

// ----------------------- //
// Firmware default values //
// ----------------------- //

// These values will be used when compiling and can't be changed when uploaded

#define LED_COUNT 60 // Default number of LEDs in the strip
#define LED_PIN 2 // Default pin for the LED strip
#define DEFAULT_MAX_POWER 850 // Default maximum power for the LED strip in mA
#define IR_PIN 4 // Default pin for the IR receiver
#define BUTTON_PIN 5 // Default pin for the button

// ---------------- //
// Disable features //
// ---------------- //

// Uncomment the following lines to disable specific features

// #define DISABLE_EEPROM
// #define DISABLE_FS
// #define DISABLE_WIFI
// #define DISABLE_MQTT

#define FASTLED_INTERNAL // Disable FastLED's internal debugging

// ----------------------- //
// Checking for board type //
// ----------------------- //

// This section checks the board type and includes the appropriate header file

#include "Arduino.h"
#if defined(ESP8266)
    #include "esp8266.h"
#elif defined(ESP32)
    #include "esp32.h"
#else
    #ifndef DISABLE_FS
        #define DISABLE_FS // Disable FS if not using ESP8266 or ESP32
    #endif
    #ifndef DISABLE_WIFI
        #define DISABLE_WIFI // Disable WiFi if not using ESP8266 or ESP32
    #endif
    #include "default.h"
#endif

#endif
