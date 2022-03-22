// C++ code
//
/*
  Sweep

  Created on March 22 by Nina Mathew
*/

#include <Servo.h>

int pos = 0;

Servo servo_7;

void setup()
{
  servo_7.attach(7, 500, 2500);

}

void loop()
{
  // sweep the servo from 0 to 90 degrees in steps
  // of 1 degrees
  for (pos = 0; pos <= 90; pos += 1) {
    // tell servo to go to position in variable 'pos'
    servo_7.write(pos);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
  for (pos = 90; pos >= 0; pos -= 1) {
    // tell servo to go to position in variable 'pos'
    servo_7.write(pos);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
}
