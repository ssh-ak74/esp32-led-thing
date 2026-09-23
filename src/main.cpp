#include <Arduino.h>

#define RED 5
#define GREEN 18
#define BLUE 19

void setup() {
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);

    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, HIGH);

    delay(8000); // blue LED lights up after 8 whole sec

    digitalWrite(BLUE, HIGH);
}

void loop() {
}
