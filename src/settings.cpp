
#include <Arduino.h>   
#include "move_functions.h"
#include "settings.h"

int motorA = 10;  //Left Motor Power
int inLeft1 = 2;      //Left Motor direction
int inLeft2 = 3;      //Left Motor direction

int motorB = 11;  //Right Motor Power
int inRight3 = 4;      //Right Motor direction
int inRight4 = 5;      //Right Motor direction

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
