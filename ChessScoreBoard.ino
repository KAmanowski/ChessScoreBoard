/*******************************************************************
    Using a 64 * 32 RGB Matrix to display a mario image
 *                                                                 *
    Based on the great work of Brian Lough
    Written by Leonid Rusnac (@lrusnac github)
    https://www.youtube.com/channel/UCezJOfu7OtqGzd5xrP3q6WA
 *******************************************************************/

#include "_Colours.h"

// ----------------------------
// Standard Libraries - Already Installed if you have ESP8266 set up
// ----------------------------

#include <Ticker.h>

#include <PxMatrix.h>
// The library for controlling the LED Matrix
// Needs to be manually downloaded and installed
// https://github.com/2dom/PxMatrix

Ticker display_ticker;

// Pins for LED MATRIX
#define P_LAT 16
#define P_A 5
#define P_B 4
#define P_C 15
#define P_OE 2
#define P_D 12
#define P_E 0

// PxMATRIX display(32,16,P_LAT, P_OE,P_A,P_B,P_C);
// PxMATRIX display(64,32,P_LAT, P_OE,P_A,P_B,P_C,P_D);
PxMATRIX display(64, 32, P_LAT, P_OE, P_A, P_B, P_C, P_D, P_E);

// This is a horribly inefficient way of drawing this, but meh.. :)
// Converted using the following site: http://www.rinkydinkelectronics.com/t_imageconverter565.php

// ISR for display refresh
void display_updater() {
  display.display(70);
}

void setup() {
  display.begin(16);
  display.setBrightness(30);
  display.clearDisplay();
  
  display_ticker.attach(0.002, display_updater);
  yield(); 
}

void drawFrame() {
  display.clearDisplay();
  int imageHeight = 32;
  int imageWidth = 64;
  int counter = 0;

  display.drawPixel(0, 0, 0xffffff);

  delay(100);
}

void loop() {
  drawScore();
  yield();
}
