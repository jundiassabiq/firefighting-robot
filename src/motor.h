#include <Arduino.h>
#define ENABLE_PIN_1 9

#define IN_1 7
#define IN_2 8

void motor_maju(){
    digitalWrite(IN_1, LOW);
    digitalWrite(IN_2, HIGH);
    analogWrite(ENABLE_PIN_1, 255);
}

void motor_mundur(){
    digitalWrite(IN_1, HIGH);
    digitalWrite(IN_2, LOW);
    analogWrite(ENABLE_PIN_1, 255);
}

void berhenti(){
    digitalWrite(IN_1, LOW);
    digitalWrite(IN_2, LOW);
    analogWrite(ENABLE_PIN_1, 0);
}

void setup(){
    pinMode(ENABLE_PIN_1, OUTPUT);
    pinMode(IN_1, OUTPUT);
    pinMode(IN_2, OUTPUT);
}

void loop(){
    motor_maju();
    motor_mundur();
    berhenti();
}

