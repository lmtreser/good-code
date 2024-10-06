/*
  * Proyecto
  * Descripción corta
  *
  * Dependencias
  *
  * created 18 Sep 2024
  * by Lucas Martin Treser
  *
  */

//=====[Select architecture]===================================================
#if defined(ESP32)
  #include <WiFi.h>
  // Cualquier librería específica de ESP32
#elif defined(ESP8266)
  #include <ESP8266WiFi.h>
  // Cualquier librería específica de ESP8266
#elif defined(ARDUINO_ARCH_AVR)
  // Librerías específicas para AVR
#else
  #error "Arquitectura no soportada, define ESP32, ESP8266 o ARDUINO_ARCH_AVR"
#endif

#include "lib.h"

//=====[Setup]=================================================================
void setup() {
  // Inicializaciones dependiendo de la arquitectura
  #if defined(ESP32) || defined(ESP8266)
    Serial.begin(115200);
  #else
    Serial.begin(9600);
  #endif
}

//=====[Main loop]=============================================================
void loop() {
  // Código principal
}
