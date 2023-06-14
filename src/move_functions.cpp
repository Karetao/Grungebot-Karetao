#include <Arduino.h>   
#include "move_functions.h"
#include "settings.h"
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS  
// This function makes the motors go forward. 
// This one starts with the word "void" meaning it is sent a job to do but it dosent send anything back (just does its thing and finishes)
// In that first line the number it is sent in the brackets is give to the variable "power"

void forward(int power)
{ 
  // switch on motor A to Forward 
  digitalWrite(inLeft1, HIGH); 
  digitalWrite(inLeft2, LOW);
  
  // switch on motor B to Forward
  digitalWrite(inRight3, HIGH);
  digitalWrite(inRight4, LOW);

  // tell the motors how much power to use (the number you send it in the brackets)
  analogWrite(motorA, power);   
  analogWrite(motorB, power);
}


void backward(int power)
{
  // switch on motor A to Backward
  digitalWrite(inLeft1, LOW);
  digitalWrite(inLeft2, HIGH);
  // switch on motor B to Backward
  digitalWrite(inRight3, LOW);
  digitalWrite(inRight4, HIGH);

  analogWrite(motorA, power);
  analogWrite(motorB, power);
}

void forwardLeft(int power)
{
  // switch on motor A to Forward
  digitalWrite(inLeft1, HIGH);
  digitalWrite(inLeft2, LOW);
  // switch on motor B to Forward
  digitalWrite(inRight3, HIGH);
  digitalWrite(inRight4, LOW);

  analogWrite(motorA, power/3);
  analogWrite(motorB, power);
}



void forwardRight(int power)
{
  // switch on motor A to Forward
  digitalWrite(inLeft1, HIGH);
  digitalWrite(inLeft2, LOW);
  // switch on motor B to Forward
  digitalWrite(inRight3, HIGH);
  digitalWrite(inRight4, LOW);

  analogWrite(motorA, power);
  analogWrite(motorB, power/3);
}



void pivotLeft(int power)
{
  // switch on motor A to Backward
  digitalWrite(inLeft1, LOW);
  digitalWrite(inLeft2, HIGH);
  // switch on motor B to Forward
  digitalWrite(inRight3, HIGH);
  digitalWrite(inRight4, LOW);

  analogWrite(motorA, power);
  analogWrite(motorB, power);
}



void pivotRight(int power)
{
  // switch on motor A to Forward
  digitalWrite(inLeft1, HIGH);
  digitalWrite(inLeft2, LOW);
  // switch on motor B to Backward
  digitalWrite(inRight3, LOW);
  digitalWrite(inRight4, HIGH);

  analogWrite(motorA, power);
  analogWrite(motorB, power);
}



void backwardLeft(int power)
{
  // switch on motor A to Backward
  digitalWrite(inLeft1, LOW);
  digitalWrite(inLeft2, HIGH);
  // switch on motor B to Backward
  digitalWrite(inRight3, LOW);
  digitalWrite(inRight4, HIGH);

  analogWrite(motorA, power/3);
  analogWrite(motorB, power);
}



void backwardRight(int power)
{
  // switch on motor A to Backward
  digitalWrite(inLeft1, LOW);
  digitalWrite(inLeft2, HIGH);
  // switch on motor B to Backward
  digitalWrite(inRight3, LOW);
  digitalWrite(inRight4, HIGH);

  analogWrite(motorA, power);
  analogWrite(motorB, power/3);
}



void fullstop()
{
  // switch on motor A to Backward
  digitalWrite(inLeft1, LOW);
  digitalWrite(inLeft2, LOW);
  // switch on motor B to Backward
  digitalWrite(inRight3, LOW);
  digitalWrite(inRight4, LOW);

  analogWrite(motorA, 200);
  analogWrite(motorB, 200);
}

