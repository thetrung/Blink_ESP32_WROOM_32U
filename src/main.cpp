///////////////////////////////////
//                               //
// ESP32 Blink/LED chase Test    //
// on ESP32-WROOM-32U dev board. //
//                               //
///////////////////////////////////
#include <Arduino.h>
#define LED_1 13
#define LED_2 12
#define LED_3 14
#define LED_4 27
#define LED_5 26
#define LED_6 25
#define LED_7 33
#define LED_8 32
#define LED_SPEED (100)

// Put them into an array :
const int LED_ARRAY[8] = {
  13,12,14,27,
  26,25,33,32
};
const int LED_TOTAL = 
  sizeof(LED_ARRAY)/sizeof(LED_ARRAY[0]);

void setup() {
  for(int i = 0; i < sizeof(LED_ARRAY); i++){
    pinMode(LED_ARRAY[i], OUTPUT);
  }
}

void blink(int index){
    digitalWrite(LED_ARRAY[index], HIGH);
    delay(LED_SPEED);
    digitalWrite(LED_ARRAY[index], LOW);
}

void loop() {
  for(int i = 0; i < LED_TOTAL; i++) blink(i);
}

