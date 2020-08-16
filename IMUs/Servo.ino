#include <stdio.h>
#include <ServoESP32.h>

Servo myServo; // instance of a servo class - myServo

int pos = 0; // position of servo
int val; // value written from keyboard to esp32

void servo_setup(){
  myServo.attach(12); // pin 12 is the GPIO PWM pin
}

void servo_loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myServo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myServo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
