#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#ifndef PSTR 
#define PSTR
#endif
#define PIN 10 

Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(32, 8, PIN,
  NEO_MATRIX_TOP      + NEO_MATRIX_LEFT +
  NEO_MATRIX_COLUMNS  + NEO_MATRIX_ZIGZAG,
  NEO_GRB             + NEO_KHZ800);
void setup() {
  matrix.begin();
}

void loop() {
  matrix.setPixelColor(0, 0x901010);
  matrix.show();
}
