 //???????????????????????????//
 // GRUNGE BOT TUTORIAL CODE //
//?????????????????????????//

#include <Arduino.h>       
#include "move_functions.h" 
#include "sensor_functions.h" 
#include "settings.h"





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

  // checkDistance();
  // if (cm>50) 
  //   {
  //   forward(120);
  //   delay(100);
  //   }
  // else
  //   {
  //   fullstop();
  //   //pivotLeft(120);
  //   delay(2000);
  //   }




}




///  END OF THE MAIN LOOP
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
