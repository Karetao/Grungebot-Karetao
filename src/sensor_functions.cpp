#include <Arduino.h>   
#include "sensor_functions.h"
#include "settings.h"
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS  
//These are functions for our sensors



int checkDistance()
{
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);              //just making sure its low before we start
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);             
  digitalWrite(triggerPin, LOW);

  // Read the signal from the sensor. A HIGH pulse whose duration is the time (in microseconds) 
  // from the sending of the ping to the hearing its echo off of an object.
  // Here we are using "pulseIn" It's is a handy thing as it measures time in tiny microseconds (a millionth of a seconds)
  duration = pulseIn(echoPin, HIGH);

  // convert the time into a distance. Its 29 microseconds per centimetre (so there and back takes 58 microseconds)
  cm = duration/58;
  
//show the results on the monitor if it is being looked at
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  
  return cm;
//  delay(100);  //You cant send info back to the computer too quickly, add this delay if there is no other delays in your code, it will just slow thing down.
}
