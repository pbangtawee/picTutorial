#include "SPI.h"
#include <Adafruit_ILI9341.h>
#include "arduino.c"

#define TFT_DC 10
#define TFT_CS 9

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);

void setup() {
  tft.begin();
  tft.setRotation(0);
}

void loop() {
  tft.fillScreen(ILI9341_BLACK);
  tft.drawRGBBitmap(0, 0, arduino_uno, 240, 240);
  delay(5000);
}