#include "defs.h"

void setup() {
  initializeMotors();
  LCD_inti();

  state = main;
  
  Serial.begin(9600);
  Serial.print("Serial begin 9600 open");

  
}

void loop() {  
  switch(state){
    case main:
      Serial.println("state = Main");
      LCD_main();
      incrementVolumValue();
      if(centerBottom == HIGH);
      {
        Serial.println("joystick buttom push -> state = empty.");
        state = empty;  
      }
    break;
    case empty:
      Serial.println("state = empty");
      LCD_empty();
      distribution();
      
    break;
    case fill:
      Serial.println("state = fill");
      LCD_fill();
    break;
  }
}
