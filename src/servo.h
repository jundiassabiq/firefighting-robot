#include <ESP32Servo.h>
#include <Arduino.h>

#define SERVO_PIN_1 10
#define SERVO_PIN_2 11

Servo servo_1;
Servo servo_2;

void setup(){
    servo_1.attach(SERVO_PIN_1);
    servo_2.attach(SERVO_PIN_2);

    servo_1.write(0);
    servo_2.write(0);
}
void loop(){
    for (int i = 0; i <= 180; i ++){
        servo_1.write(i);
        servo_2.write(i);
        delay(15);
    }

    for (int i = 180; i >= 0; i --){
        servo_1.write(i);
        servo_2.write(i);
        delay(15);
    }
}