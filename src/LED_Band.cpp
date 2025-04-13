#include <Adafruit_NeoPixel.h>

#define LED_PIN    6       // Pin, an dem die NeoPixel angeschlossen sind
#define LED_COUNT  30      // Anzahl der LEDs im Streifen

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_RGBW + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show();            // Alle Pixel ausschalten
  strip.setBrightness(50); // Helligkeit auf 50% setzen
}

void loop() {
  // Alle LEDs auf warmweiß setzen
  setAllWarmWhite();
  delay(1000); // 1 Sekunde warten

  // Alle LEDs auf kaltweiß setzen
  setAllCoolWhite();
  delay(1000); // 1 Sekunde warten
}

void setAllWarmWhite() {
  for(int i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, strip.Color(0, 0, 0, 255)); // Warmweiß
  }
  strip.show();
}

void setAllCoolWhite() {
  for(int i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, strip.Color(255, 255, 255, 0)); // Kaltweiß
  }
  strip.show();
}
