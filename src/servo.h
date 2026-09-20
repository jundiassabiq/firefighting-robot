#include <ESP32Servo.h>
#include <Arduino.h>

#define SERVO_PIN_1 10
#define SERVO_PIN_2 11

Servo servo_1;
Servo servo_2;

void servoKanan(){
    for (int i = 0; i <= 180; i ++){
        servo_1.write(i);
        delay(15);
    }
}
void servoKiri(){
    for (int i = 180; i >= 0; i --){
        servo_1.write(i);
        delay(15);
    }
}
void servoAtas(){
    for (int i = 0; i <= 180; i ++){
        servo_1.write(i);
        delay(15);
    }
}
void servoBawah(){
    for (int i = 180; i >= 0; i --){
        servo_1.write(i);
        delay(15);
    }
}