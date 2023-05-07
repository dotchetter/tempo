#ifndef DEFINITIONS_H_
#define DEFINITIONS_H_

/*
 * File: definitions.h
 * Author: Simon Olofsson
 * Program: 'Tempo' project firmware
 * Processor: ESP8266 @ 80MHz, 3.3v
 * MCU: Adafruit Feather Huzzah ESP8266
 * Program Description: This file contains definitions
                        used in the firmware.
 *
 * Written on 2023-05-07, Simon Olofsson
 */

#define FW_VERSION           "1.0.0"
#define PRODUCT_NAME         "Tempo"

#define DHT11_PIN            14

#define SECOND               1000UL
#define MINUTE               60 * SECOND
#define HOUR                 60 * MINUTE
#define DAY                  24 * HOUR

#define WIFI_SSID            "Wi-Fi"

// How often the device should awake and send telemetry
#define INTERVAL             15 * MINUTE

#define DEVMODE              0
#define DEVICE_ID            ""
#define CONTENT_TYPE         "application/json"


#define SERVER_ROOT      "dweet.io"
#define SUB_PATH         "/dweet/for/"
#define SERVER_PORT      80


/* Macros */
#define TIME_PASSED(ref, ts) (millis() - ts > ref)

#endif // DEFINITIONS_H_
