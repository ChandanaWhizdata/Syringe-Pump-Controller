/*******************************************************************************
  System Definitions

  File Name:
    my_buttons.h

  Summary:
    Header file which shares global variables and function prototypes.

  Description:
    This file contains the global variables and function prototypes for a buttons.

 *******************************************************************************/

// ensure this library description is only included once
#ifndef MY_BUTTONS_H
#define MY_BUTTONS_H

/*******************************************************************************
Header Inclusions
*******************************************************************************/
#include <Arduino.h>
#include <TFT_eSPI.h>               // Hardware-specific library
#include <TFT_eWidget.h>            // Widget library

/*******************************************************************************
Definitions
*******************************************************************************/
ButtonWidget Start_Stop_Butn = ButtonWidget(&tft);
ButtonWidget Clock_Butn = ButtonWidget(&tft);
ButtonWidget Counter_Clock_Butn = ButtonWidget(&tft);

// Create an array of button instances to use in for() loops
// This is more useful where large numbers of buttons are employed
ButtonWidget* btn[] = {&Start_Stop_Butn, &Clock_Butn, &Counter_Clock_Butn};

struct
{
  bool start_stop_butn;
  bool clock_butn;
  bool counter_clock_butn;
}buttons_status;


/*******************************************************************************
Function prototypes
*******************************************************************************/
void Buttons_Init(void);

void buttons_display(void);

void Start_Stop_Butn_Press_Action(void);

void Clock_Butn_Press_Action(void);

void Counter_Clock_Butn_Press_Action(void);

#endif  //MY_BUTTONS_H