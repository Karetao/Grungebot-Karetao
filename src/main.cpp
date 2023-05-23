 //???????????????????????????//
 // GRUNGE BOT TUTORIAL CODE //
//?????????????????????????//

#include <Arduino.h>     

// create some variables
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


//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  HERE IS WHERE IT ALL HAPPENS
//  You can use the following commands (functions):
//    forward()  backward()  pivotLeft()  pivotRight()  forwardLeft()  forwardRight() and fullstop()
//
//  In the brackets you say how much power the motors should use ( 0 being no power, up to 256 for full power). 
//
//  Except for delay, that thing has the duration of the delay not power (it is in ms, 1000 is a second)
//
//  For example:
//  forward(200);    // Go forward with power set to 200
//  delay(2000);     // Keep doing whatever its doing for 2 seconds (2000ms)
//  fullstop();      // Ok this is obvious. When you turn things off you don't need to say a power 


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
