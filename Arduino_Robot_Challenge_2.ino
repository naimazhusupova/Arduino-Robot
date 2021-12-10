// Include the servo library:
#include <Servo.h>
// Create a new servo object:
Servo myservo;
// Define the servo pin:
#define servoPin 3
#define servoPin 6

// Create a variable to store the servo position:
int angle = 0;
void setup() {
  // Attach the Servo variable to a pin:
  myservo.attach(servoPin);
}
void loop() {
  // Tell the servo to go to a particular angle:
  myservo.write(90);
  delay(1000);
  myservo.write(180);
  delay(1000);
  myservo.write(0);
  delay(1000);
}
