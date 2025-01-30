// Robot setup
void setup() {
  // Motor Set Up
  pinMode(13, OUTPUT);  // Set Pin 13 as output
  pinMode(11, OUTPUT);  // Set Pin 11 as output
}

void loop() {
  delay(5000);            // Wait for 5 seconds
  spinLeft(100);          // Spin left with both motors running at speed 100
  delay(5000);            // Wait for another 5 seconds
  stopMotors();           // Stop the motors
}

// Spin left function - spins the robot to the left while both motors are running at the same speed
void spinLeft(int motorspeed){
  digitalWrite(13, HIGH);  // Turn on Pin 13 (move forward)
  digitalWrite(12, LOW);  // Turn off Pin 12 (move forward)
  analogWrite(11, motorspeed);  // Set speed for right motor
  analogWrite(3, motorspeed);   // Set speed for left motor (both motors move at same speed to spin left)
}

// Forward turn function - turns the robot while moving forward
// leftspeed and rightspeed control the speed of the left and right motors.
void forwardTurn(int leftspeed, int rightspeed){
  digitalWrite(13, HIGH);  // Turn on Pin 13 (move forward)
  digitalWrite(12, HIGH);  // Turn on Pin 12 (move forward)
  analogWrite(11, leftspeed);  // Set speed for right motor
  analogWrite(3, rightspeed);    // Set speed for left motor
}

// Stop the motors
void stopMotors(){  
  analogWrite(11, 0);  // Set motor speed to 0 (this stops the motor)  
  analogWrite(3, 0);  // Set motor speed to 0 (this stops the motor)  
}

// Reverse function - makes the robot move backward
void reverse(int motorspeed){  
  digitalWrite(13, HIGH);  // Turn off Pin 13
  digitalWrite(12, HIGH);  // Turn off Pin 12
  analogWrite(11, motorspeed);  // Set motor speed using pulse-width modulation (PWM)
  analogWrite(3, motorspeed);  // Set motor speed using pulse-width modulation (PWM)
}

// Forward function - makes the robot move
// void → This means the function doesn't "return" anything (it just does something).
// drive → This is the name of the function. We call this to make the robot move.
// (int motorspeed) → This is the "input." When we call drive(100), motorspeed = 100.
void forward(int motorspeed){  
  digitalWrite(13, HIGH);  // Turn on Pin 13
  digitalWrite(12, HIGH);  // Turn on Pin 12
  analogWrite(11, motorspeed);  // Set motor speed using pulse-width modulation (PWM)
  analogWrite(3, motorspeed);  // Set motor speed using pulse-width modulation (PWM)
}