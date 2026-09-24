#include <Servo.h>

Servo myServo;

// CUSTIOM FUNCTIONS
 // angle forward the servo to theAngle
void forwardServo(int from, int to) {
  for (int angle = from; angle <= to; angle++) {
    myServo.write(angle);
    delay(15);
  }
 }

// angle Return the servo to theAngle 
void backwardServo(int from, int to) {
  for (int angle = from; angle >= to; angle--) {
    myServo.write(angle);
    delay(15);
  }
}




void setup() {
  Serial.begin(9600);
  myServo.attach(9);
}

void loop() {
  delay(1000);
    myServo.write(143);
    delay(1000);
    myServo.write(47);
    delay(1000);
    myServo.write(143);
    delay(1000);
    myServo.write(-239);
    delay(1000);

}