

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 160;    // variable to store the servo position

void setup() {
  myservo.attach(13);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
  Serial.print("Servo : 0 degrees");

}

void loop() {
  for (pos = 160; pos >=  0; pos -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(800);                       // waits 15ms for the servo to reach the position
  }
 
}
