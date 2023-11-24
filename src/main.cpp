//???????????????????????????//
// GRUNGE BOT TUTORIAL CODE //
//?????????????????????????//

#include <Arduino.h>
#include "move_functions.h"
#include "sensor_functions.h"
#include "settings.h"

int distance = 3000;
int LINE_SENSOR = 0;
int onLine = LOW; // 1 or HIGH is Bright and 0 or LOW is Dark

void loop()
{
  // Test the driving

  // forward(500);    //200 is the power level
  // delay(500);    //3000 is the number of milliseconds to wait until doing the next instruction

  // pivotLeft(50);
  // delay(500);
  // forward(500);
  // delay(500);
  // pivotLeft(50);
  // delay(500);
  // forward(500);

  // Test the ultrasconic
  //  distance = checkDistance();
  //  if (distance>50)
  //    {
  //    forward(120);
  //    delay(100);
  //    }
  //  else
  //    {
  //    fullstop();
  //    pivotLeft(120);
  //    delay(100);
  //    }

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

  // Check line sensor  (1 or HIGH is Bright and 0 or LOW is Dark)
  //  LINE_SENSOR = digitalRead(lineSensorPin);
  //  Serial.print("Linesensor value = ");
  //  Serial.print(LINE_SENSOR);
  //  Serial.println();
  //  delay(50);

  // //fullstop();
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

  // Check line sensor  (1 or HIGH is Bright and 0 or LOW is Dark)
  // delay(50);
  // fullstop(); // Use the stop and delay to slow things down if needed
  // delay(500);

  // Check distance and if it is on the line
  // distance = checkDistance();
  // onLine = digitalRead(lineSensorPin);

  // Serial.print("Linesensor value = ");
  // Serial.print(onLine);
  // Serial.print("  Distance value = ");
  // Serial.print(distance);
  // Serial.println();

  // if (distance > 100)
  // {
  //   if (onLine == HIGH)
  //   {
  //     // WHAT TO DO?? GrungeBot is on the line. DO Something!
  //     fullstop(); // STOP!!! You are on the line
  //     delay(500);
  //     pivotRight(200);
  //     delay(700); // keep piviting for 100ms
  //     forward(200);
  //     delay(1000); // keep going forward for 1 second !!!!!! You could improve this using a While loop to check the line while you escape so you don't just dive over it
  //     //Hopefully it is off the line now and now more in the middle of the arena
  //   }
  //   else
  //   {
  //     pivotLeft(100);
  //   }
  // }

  // else if (distance > 50) // so it is less than 100 and more than 50
  // {
  //   if (onLine == HIGH)
  //   {
  //     // WHAT TO DO?? GrungeBot is on the line. DO Something!
  //      fullstop();  //STOP!!! You are on the line
  //      delay(700);
  //      pivotRight(200);
  //      delay(500); //keep piviting for 100ms  (hopefully it is off the line now)
  //      forward(200);
  //      delay(1000); //keep going forward for 1 second
  //      //Hopefully it is off the line now and now more in the middle of the arena
  //   }
  //   else
  //   {
  //     forward(150);
  //   }
  // }

  // else // Something is very close (close than 50cm)
  // {
  //   if (onLine == HIGH)
  //   {
  //     // WHAT TO DO?? GrungeBot is on the line. DO Something!
  //     fullstop();  //STOP!!! You are on the line
  //     delay(700);
  //     pivotRight(200);
  //     delay(500); //keep piviting for 100ms  (hopefully it is off the line now)
  //     forward(200);
  //     delay(1000); //keep going forward for 1 second
  //     //Hopefully it is off the line now and now more in the middle of the arena
  //   }
  //   else
  //   {
  //     forward(250);
  //   }
  // }

  // HERE IS ANOTHER WAY TO DO IT - USING A WHILE LOOP

  distance = checkDistance();
  onLine = digitalRead(lineSensorPin);

  Serial.print("Linesensor value = ");
  Serial.print(onLine);
  Serial.print("  Distance value = ");
  Serial.print(distance);
  Serial.println();

  while (onLine == LOW)
  {
    delay(50); //Just to slow it down a bit
    fullstop();
    delay(50);
    distance = checkDistance();
    if (distance > 100)
    {
      pivotLeft(80);
    }
    else if (distance > 50)
    {
      forward(100);
    }
    else if (distance > 10)
    {
      forward(150);
    }
    else // Something is very close
    {
      forward(240);
      delay(600);
    }
    onLine = digitalRead(lineSensorPin);
  }
  // Now WHAT TO DO?? GrungeBot is on the line. DO Something!
  fullstop(); // STOP!!! I guess this is the first thing
  delay(700);
  pivotRight(200);
  delay(200); // keep piviting for 100ms  (hopefully it is off the line now)
  forward(200);
  delay(500); // keep going forward for 300ms
  fullstop(); // STOP!!! I guess this is the first thing
  delay(500);
    // Hopefully it is off the line now and now more in the middle of the arena
}

///  END OF THE MAIN LOOP
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
