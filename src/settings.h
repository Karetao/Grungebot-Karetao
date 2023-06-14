#ifndef SETTINGS_H
    #include <Arduino.h>

    extern int motorA;  //Left Motor Power
    extern int inLeft1;      //Left Motor direction
    extern int inLeft2;      //Left Motor direction

    extern int motorB;  //Right Motor Power
    extern int inRight3;      //Right Motor direction
    extern int inRight4;      //Right Motor direction

    extern int triggerPin;    //The arduino will SHOUT (go "ping") on pin 12
    extern int echoPin;       //The arduino will Listen to the echo on pin 13
    extern long duration;    // create variable that will hold the time it takes between the ping and the echo being heard 
    extern long cm;   // create a variable for the distance result in cm and set it to 3000cm 


    void setup();

#endif