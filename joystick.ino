#include "defs.h"

horizontalPosition_t horizontalPosition;
verticalPosition_t verticalPosition;

const unsigned int bottomLimit = 400;
const unsigned int topLimit = 1000;
const unsigned int rightLimit = 400;
const unsigned int leftLimit = 1000;

horizontalPosition_t getHorizontalPosition() {
  return horizontalPosition;
}

verticalPosition_t getVerticalPosition() {
  return verticalPosition;
}

void updateJoystickInformation()
{
  int vertical = analogRead(A0);
  int horizontal = analogRead(A1);
  if (vertical > topLimit)
  {
    verticalPosition = TOP;  
  }  
  else if (vertical < bottomLimit)
  {
    verticalPosition = BOTTOM; 
  }
  else
  {
    verticalPosition = CENTER_V;  
  }

  if (horizontal > leftLimit)
  {
    horizontalPosition = LEFT;  
  }
  else if(horizontal < rightLimit)
  {
    horizontalPosition = RIGHT;
  }
  else
  {
    horizontalPosition = CENTER_H;
  }
}

void change_menu(){
  updateJoystickInformation();
  if (verticalPosition == TOP){
        if (product == solution_1){
          product = (END - 1);
        }
        else{
          product--;
        }
  }
  else if (verticalPosition == BOTTOM){
        if (product == (END - 1)){
          product = (BEGIN + 1);
        }
        else{
          product++;
        }
  }
}

void incrementVolumValue(){
updateJoystickInformation();
switch(product){
    case solution_1:
      if ((horizontalPosition == RIGHT) && (volum_1 > 0)){
       volum_1 = volum_1 - 0.2; 
       delay(100);
      }
      else if (horizontalPosition == LEFT){
       volum_1 = volum_1 + 0.2;
       delay(100);
      }
    break;
    case solution_2:
      if (horizontalPosition == RIGHT  && (volum_2 > 0)){
        volum_2 = volum_2 - 0.25;
        delay(100);
      }
      else if (horizontalPosition == LEFT){
        volum_2 = volum_2 + 0.25;
        delay(100);
      }
    break;
    
    case solution_3:
      if (horizontalPosition == RIGHT  && (volum_3 > 0)){
       volum_3 = volum_3 - 0.25;
       delay(100);
      }
      else if (horizontalPosition == LEFT){
       volum_3 = volum_3 + 0.25;
       delay(100);
      }
    break;
    
    case solution_4:
      if (horizontalPosition == RIGHT && (volum_4 > 0)){
       volum_4 = volum_4 - 0.25;
       delay(100);
      }
      else if (horizontalPosition == LEFT){
       volum_4 = volum_4 + 0.25;
       delay(100);
      }
    break;
    
    case solution_5:
      if (horizontalPosition == RIGHT && (volum_5 > 0)){
       volum_5 = volum_5 - 0.25;
       delay(100);
      }
      else if (horizontalPosition == LEFT){
       volum_5 = volum_5 + 0.25;
       delay(100);
      }
    break;
  }
}
