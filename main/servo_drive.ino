#include <ServoESP32.h>

Servo myServo;  // create servo object to control a servo

int pos = 0;    // variable to store the servo position

void servo_setup() {
  myServo.attach(13);  // attaches the servo on pin 13 to the servo object
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
