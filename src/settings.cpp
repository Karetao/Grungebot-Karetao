
#include <Arduino.h>   
#include "move_functions.h"
#include "sensor_functions.h"
#include "settings.h"

int motorA = 10;  //Left Motor Power
int inLeft1 = 2;      //Left Motor direction
int inLeft2 = 3;      //Left Motor direction

int motorB = 11;  //Right Motor Power
int inRight3 = 4;      //Right Motor direction
int inRight4 = 5;      //Right Motor direction

//Ultrasconic
int triggerPin = 12;    //The arduino will SHOUT (go "ping") on pin 12
int echoPin = 13;       //The arduino will Listen to the echo on pin 13
long duration;    // create variable that will hold the time it takes between the ping and the echo being heard 
long cm = 3000;   // create a variable for the distance result in cm and set it to 3000cm 


void setup()
{
  // set all the pins we are using on the computer to be outputs (sending a signal to the motor controller)
  pinMode(motorA, OUTPUT);
  pinMode(motorB, OUTPUT);
  pinMode(inLeft1, OUTPUT);
  pinMode(inLeft2, OUTPUT);
  pinMode(inRight3, OUTPUT);
  pinMode(inRight4, OUTPUT);


  //Ultrasconic
  Serial.begin(9600); // initialize serial communication to the "monitor" so we can test the Ultrasonic sensor
  pinMode(triggerPin, OUTPUT);  //set the ultrasonic shouting pin
  pinMode(echoPin, INPUT);  // set the ultrasonic listening pin
}
