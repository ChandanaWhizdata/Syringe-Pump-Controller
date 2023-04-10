/*******************************************************************************
 Stepper Motor Control Source file 

  Company:
    Whizdata Solutions LLP.

  File Name:
    stepper.cpp

  Summary:
    This file contains all the functions related to stepper motor control

  Description:
    This file contains implementation of the stepper control functions
 
 *******************************************************************************/

/*******************************************************************************
Header Inclusions
*******************************************************************************/
#include "stepper.h"

/*******************************************************************************
Functions
*******************************************************************************/

/******************************************************************************
Function:     Stepper_Init
Description:  Stepper motor control variable initialization
Input:        nothing (uses some global variables)
Output:       nothing (modifies some global variables)
Note:         to be called once before starting the motor control functions              
******************************************************************************/
void Stepper_Init(void)
{
    //set the mode of the GPIO pins of MCU as OUTPUT as the MCU is driving the motor
    pinMode(DIR_PIN, OUTPUT);
    pinMode(STEP_PIN, OUTPUT);

    //set the direction to clock wise as default
    digitalWrite(DIR_PIN, CLOCK_WISE);
    stepper.set_dir = CLOCK_WISE;

    //default motor direction is one way
    stepper.set_dir_mode = ONE_DIRECTION;
}

/******************************************************************************
Function:     motor_run
Description:  Run the stepper motor 
Input:        nothing (uses some global variables)
Output:       nothing (modifies some global variables)
Note:         MCU will send continuous pulse to motor             
******************************************************************************/
void motor_run(void)
{
    //one complete rotation of a stepper motor
    digitalWrite(STEP_PIN,HIGH);
    delayMicroseconds(500);
    
    digitalWrite(STEP_PIN,LOW);
    delayMicroseconds(500);
}
