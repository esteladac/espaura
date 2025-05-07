#include "espaura.h"


void setup() {
    // Initialize the firmware
    // This function is called once at the beginning of the program
    // Add your initialization code here
    // For example, you can initialize hardware components, set up serial communication, etc.
    pinMode(LED_BUILTIN, OUTPUT); // Set the built-in LED pin as output
    Serial.begin(SERIAL_BAUD); // Start serial communication at the defined baud rate
    Serial.println("ESPAura Firmware Initialized"); // Print a message to the serial monitor
    wifi.init(); // Initialize WiFi (if applicable)
}

void loop() {
    // Main loop of the firmware
    // This function is called repeatedly in the main program
    // Add your main loop code here
    // For example, you can call other functions or perform tasks
    // that need to be executed continuously
    digitalWrite(LED_BUILTIN, HIGH); // Turn on the built-in LED
    delay(1000); // Wait for 1 second
    digitalWrite(LED_BUILTIN, LOW); // Turn off the built-in LED
    delay(1000); // Wait for 1 second
}