#include <Stepper.h>
#include "defs.h"

const int stepsPerRevolution = 48;
const int numberOfSeringues = 5;


Stepper stepper_H(stepsPerRevolution, 3, 4, 5, 6);
Stepper stepper_1(stepsPerRevolution, 7, 8, 9, 10);
Stepper stepper_2(stepsPerRevolution, 11, 12, 13, 14);
Stepper stepper_3(stepsPerRevolution, 15, 16, 17, 18);
Stepper stepper_4(stepsPerRevolution, 19, 20, 21, 22);
Stepper stepper_5(stepsPerRevolution, 23, 24, 25, 26);

Stepper *motors[] = {
  &stepper_1,
  &stepper_2,
  &stepper_3,
  &stepper_4,
  &stepper_5,
  &stepper_H
};


void initializeHorizontal(){
}

void initializeMotors() {
  for (int i = 0; i < numberOfSeringues; i++) {
    motors[i]->setSpeed(10);
  }
}

void moveMotor(unsigned int motorId, int steps) {
  motors[motorId]->step(steps);
}

void fillSyringe(unsigned int syringeId) {
  for (int i = 0; i < numberOfSeringues; i ++){
    
  }
}
