//visit robotrybd.com for RoboBox and more learning kit
int speed = 75;

//Right motor
int enableA=5;
int motorA_Pin1=7;
int motorA_Pin2=8;

//Left motor
int enableB=6;
int motorB_Pin1=9;
int motorB_Pin2=10;


// ---------- Motor A functions ----------
void motorA_forward() {
  digitalWrite(motorA_Pin1, HIGH);
  digitalWrite(motorA_Pin2, LOW);
  analogWrite(enableA, speed); // speed 0-255
}

void motorA_backward() {
  digitalWrite(motorA_Pin1, LOW);
  digitalWrite(motorA_Pin2, HIGH);
  analogWrite(enableA, speed);
}

// ---------- Motor B functions ----------
void motorB_forward() {
  digitalWrite(motorB_Pin1, HIGH);
  digitalWrite(motorB_Pin2, LOW);
  analogWrite(enableB, speed);
}

void motorB_backward() {
  digitalWrite(motorB_Pin1, LOW);
  digitalWrite(motorB_Pin2, HIGH);
  analogWrite(enableB, speed);
}

// ---------- Stop ----------
void stopMotors() {
  analogWrite(enableA, 0);
  analogWrite(enableB, 0);
}
// ---------- Turn ----------
void turnLeft() {
  motorA_backward();
  motorB_forward();
  delay(500);
  stopMotors();
}

void turnRight() {
  motorA_forward();
  motorB_backward();
  delay(500);
  stopMotors();
}




void setup()
{
  // put your setup code here, to run once:
  pinMode(enableRightMotor,OUTPUT);
  pinMode(rightMotorPin1,OUTPUT);
  pinMode(rightMotorPin2,OUTPUT);
  
  pinMode(enableLeftMotor,OUTPUT);
  pinMode(leftMotorPin1,OUTPUT);
  pinMode(leftMotorPin2,OUTPUT);

  myServo.attach(SERVO_PIN);
  myServo.write(90);
  rotateMotor(0,0);   
}

void loop()
{

motorA_forward();
motorB_forward();

}