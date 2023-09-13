 //???????????????????????????//
 // GRUNGE BOT TUTORIAL CODE //
//?????????????????????????//

#include <Arduino.h>       
#include "move_functions.h" 
#include "sensor_functions.h" 
#include "settings.h"




int distance = 3000;
int LINE_SENSOR = 0;

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
  // distance = checkDistance();
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



  // fullstop();
  // delay(500);
  // distance = checkDistance();
  // if (distance>100) 
  //   {
  //   pivotLeft(100);
  //   delay(50);
  //   }
  // else
  //   {
  //   //fullstop();
  //   forward(100);
  //   delay(100);
  //   }



  // fullstop();
  // delay(500);
  // distance = checkDistance();
  // if (distance>100) 
  //   {
  //   pivotLeft(100);
  //   delay(50);
  //   }
  // else if (distance > 50 )
  //   {
  //   forward(100);
  //   delay(50);
  //   }
  // else if (distance > 10 )
  //   {
  //   forward(150);
  //   delay(300);
  //   }
  // else
  //   {
  //   forward(240);
  //   delay(600);
  //   }


//Check line sensor  (1 or HIGH is Bright and 0 or LOW is Dark)
  LINE_SENSOR = digitalRead(lineSensorPin);
  Serial.print("Linesensor value = ");
  Serial.print(LINE_SENSOR);
  Serial.println();
  delay(50);

  //fullstop();
  // delay(20);
  // distance = checkDistance();
  // if (distance>100) 
  //   {
  //     pivotLeft(100);
  //     if (digitalRead(lineSensorPin) == HIGH)
  //     {
  //       //WHAT TO DO?? GrungeBot has just turned left into the edge. DO Something?
  //     }
  //   }
  // else if (distance > 50 )
  //   {
  //     forward(100);
  //     if (digitalRead(lineSensorPin) == HIGH)
  //     {
  //       //WHAT TO DO?? GrungeBot has just driven forward onto the edge. Time to turn around.
  //     }
  //   }
  // else if (distance > 10 )
  //   {
  //     forward(150);
  //         if (digitalRead(lineSensorPin) == HIGH)
  //     {
  //       //WHAT TO DO?? GrungeBot has just driven forward onto the edge. Time to turn around.
  //     }
  //   }
  // else  //Something is very close
  //   {
  //     forward(240);
  //     if (digitalRead(lineSensorPin) == HIGH)
  //     {
  //       //WHAT TO DO?? GrungeBot has just driven forward onto the edge. OR maybe it is the other robot?
  //     }
  //   }



}




///  END OF THE MAIN LOOP
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
