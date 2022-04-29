#include <FastLED.h>

#define LED_PIN     7
#define NUM_LEDS    8
#define BRIGHTNESS  255

CRGB leds[NUM_LEDS];

void setup() {

  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(  BRIGHTNESS );
}

void loop() {
  red();
  // delay(200);
}
void mor(){
  leds[0] = CRGB(230, 0, 200);
  leds[1] = CRGB(230, 0, 200);
  leds[2] = CRGB(230, 0, 200);
  leds[3] = CRGB(190, 0, 200);
  leds[4] = CRGB(230, 0, 255);
  leds[5] = CRGB(230, 0, 200);
  leds[6] = CRGB(230, 0, 200);
  leds[7] = CRGB(230, 0, 200);
  FastLED.show();
  }
void red(){
  leds[0] = CRGB(200, 0, 0);
  leds[1] = CRGB(200, 0, 0);
  leds[2] = CRGB(200, 0, 0);
  leds[3] = CRGB(200, 0, 0);
  leds[4] = CRGB(200, 0, 0);
  leds[5] = CRGB(200, 0, 0);
  leds[6] = CRGB(200, 0, 0);
  leds[7] = CRGB(200, 0, 0);
  FastLED.show();
  }

void animasyon2(){

  leds[0] = CRGB(255 ,0, 0);
  leds[1] = CRGB(255 ,0, 0);
  leds[2] = CRGB(100 ,200, 0);
  leds[3] = CRGB(70 ,100, 255);
  leds[4] = CRGB(70 ,100, 255);
  leds[5] = CRGB(100 ,200, 0);
  leds[6] = CRGB(255 ,0, 0);
  leds[7] = CRGB(255 ,0, 0);
  FastLED.show();
  }
