#include<Servo.h>
Servo servo1;
Servo servo2;


void setup() {
  servo1.attach(3);
  servo2.attach(6);
}

void loop() {
   
    servo1.write(180);             
    servo2.write(0);            
    delay(3000);
    exit(0);
}
