 //???????????????????????????//
 // GRUNGE BOT TUTORIAL CODE //
//?????????????????????????//

#include <Arduino.h>     
#include "setup_stuff.h"    
#include "move_functions.h" 

void setup()
{
  // set all the pins we are using on the computer to be outputs (sending a signal to the motor controller)
  pinMode(motorA, OUTPUT);
  pinMode(motorB, OUTPUT);
  pinMode(inLeft1, OUTPUT);
  pinMode(inLeft2, OUTPUT);
  pinMode(inRight3, OUTPUT);
  pinMode(inRight4, OUTPUT);
}





void loop() 
{
  forward(200);    //200 is the power level
  delay(3000);    //3000 is the number of milliseconds to wait until doing the next instruction 
  fullstop();
  delay(100);
  backward(200);
  delay(3000);
  fullstop();
  delay(3000);
}




///  END OF THE MAIN LOOP
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
