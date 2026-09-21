/* THEORY

- there are 2 motor connections ONLY
- each connection have OUTPUT(1) and OUTPUT(2)
    motorA_Pin1
    motor1_out2
    motor2_out1
    motor2_out2

    out1 is connected to the terminal-1 of the motor.
    out1 is connected to the terminal-2 of the motor.
    
    out1 and out2 controls the direction of the motor.

*/
const int speed = 200;

// Motor A pins
const int enableA = 6; // MUST BE CONNECTED TO PWM, controls the speed
const int motorA_Pin1 = 7;
const int motorA_Pin2 = 2;

// Motor B pins
const int enableB = 5; // MUST BE CONNECTED TO PWM
const int motorB_Pin1 = 13;
const int motorB_Pin2 = 12;

void setup() {
  // Set all motor control pins as outputs
  pinMode(enableA, OUTPUT);
  pinMode(motorA_Pin1, OUTPUT);
  pinMode(motorA_PmotorA_Pin2, OUTPUT);

  pinMode(enableB, OUTPUT);
  pinMode(motorB_Pin1, OUTPUT);
  pinMode(motorB_Pin2, OUTPUT);
}

void loop() {
  // ---- Both motors FORWARD ----
  motorA_forward();
  motorB_forward();
  delay(2000);

  // ---- Stop both motors ----
  stopMotors();
  delay(1000);

  // ---- Both motors BACKWARD ----
  motorA_backward();
  motorB_backward();
  delay(2000);

  // ---- Stop both motors ----
  stopMotors();
  delay(1000);
}

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