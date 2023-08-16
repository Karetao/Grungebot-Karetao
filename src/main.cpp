 //???????????????????????????//
 // GRUNGE BOT TUTORIAL CODE //
//?????????????????????????//

#include <Arduino.h>       
#include "move_functions.h" 
#include "sensor_functions.h" 
#include "settings.h"





void loop() 
{ 
  //Test the driving
  // forward(200);    //200 is the power level
  // delay(3000);    //3000 is the number of milliseconds to wait until doing the next instruction 
  // fullstop();
  // delay(100);
  // backward(200);
  // delay(3000);
  // fullstop();
  // delay(3000);



//Test the ultrasconic
 int distance = checkDistance();

  // checkDistance();
  // if (distance>50) 
  //   {
  //   forward(120);
  //   delay(100);
  //   }
  // else
  //   {
  //   fullstop();
  //   pivotLeft(120);
  //   delay(100);
  //   }




  // checkDistance();
  // if (distance>100) 
  //   {
  //   pivotLeft(100);
  //   delay(50);
  //   }
  // else
  //   {
  //   //fullstop();
  //   forward(120);
  //   delay(100);
  //   }



  fullstop();
  delay(500);
  checkDistance();
  if (distance>100) 
    {
    pivotLeft(100);
    delay(50);
    }
  else if (distance > 50 )
    {
    forward(100);
    delay(50);
    }
  else if (distance > 10 )
    {
    forward(150);
    delay(300);
    }
  else
    {
    forward(240);
    delay(600);
    }


}




///  END OF THE MAIN LOOP
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
