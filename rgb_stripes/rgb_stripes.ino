    #include <FastLED.h>
    #define LED_PIN     7
    #define NUM_LEDS    1
    CRGB leds[NUM_LEDS];
    void setup() {
      FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
      pinMode(7, OUTPUT);
    }
    void loop() {
      leds[0] = CRGB(255, 0, 0);
      FastLED.show();
      delay(500);
      leds[0] = CRGB(0, 0, 0);
      FastLED.show();
    }
