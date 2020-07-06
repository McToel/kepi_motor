#include <Motor.h>

// Create Motor objects
Motor mot_left(1);
Motor mot_right(2);

void setup() {
  mot_left.attach();
  mot_right.attach();
}

void loop() {
  // Rotate motor at full speed in positive direction
  mot_left.set(255);
  mot_right.set(255);
  delay(1000);
  // Stop motor
  mot_left.set(0);
  mot_right.set(0);
  delay(1000);
  // Rotate motor at full speed in negative direction
  mot_left.set(-255);
  mot_right.set(-255);
  delay(1000);
  // Stop motor
  mot_left.set(0);
  mot_right.set(0);
  delay(1000);
}
