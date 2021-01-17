#include <math.h>

#define ledPin 13

int sensorPin = A0;
int sensorValue =0;

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin,HIGH);
  Serial.begin(9600);
}

void loop() {
    sensorValue = analogRead(sensorPin);
    Serial.println(sensorValue);
    delay(1000);
}
