/*******************************************************************************
  TFT Buttons Source file 

  Company:
    Whizdata Solutions LLP.

  File Name:
    my_buttons.cpp

  Summary:
    This file contains all the functions related to TFT buttons control

  Description:
    This file contains implementation of the display
 
 *******************************************************************************/

/*******************************************************************************
Header Inclusions
*******************************************************************************/
#include <my_buttons.h>
#include <tft_display.h>

/*******************************************************************************
Functions
*******************************************************************************/

/******************************************************************************
Function:     Buttons_Init
Description:  TFT buttons initialization and creation
Input:        nothing (uses some global variables)
Output:       nothing (modifies some global variables)            
******************************************************************************/
void Buttons_Init(void)
{
  buttons_display();
}

/******************************************************************************
Function:     buttons_display
Description:  TFT buttons displaying
Input:        nothing (uses some global variables)
Output:       nothing (modifies some global variables)
******************************************************************************/
void buttons_display(void)
{
  //START/STOP button
  Start_Stop_Butn.initButtonUL(204,165,110,70,TFT_WHITE,TFT_GREEN,TFT_RED,"START",1);
  Start_Stop_Butn.setPressAction(Start_Stop_Butn_Press_Action);
  Start_Stop_Butn.drawSmoothButton(false, 2, TFT_BLACK);

  //Clock Wise button
  Clock_Butn.initButtonUL(151,9,68,48,TFT_WHITE,TFT_BLACK,TFT_GREEN,"CW",1);
  Clock_Butn.setPressAction(Clock_Butn_Press_Action);
  Clock_Butn.drawSmoothButton(false, 2, TFT_BLACK);
  Clock_Butn.drawSmoothButton(!Clock_Butn.getState(), 3, TFT_BLACK, Clock_Butn.getState() ? "CW" : "CW");

  //Counter Clock wise
  ccw_butn.initButtonUL(246,9,68,48,TFT_WHITE,TFT_BLACK,TFT_GREEN,"CCW",1);
  ccw_butn.setPressAction(Counter_Clock_Butn_Press_Action);
  ccw_butn.drawSmoothButton(false, 2, TFT_BLACK);
}

/******************************************************************************
Function:     Start_Stop_Butn_Press_Action
Description:  Start/Stop button press event
Input:        nothing (uses some global variables)
Output:       nothing (modifies some global variables)
******************************************************************************/
void Start_Stop_Butn_Press_Action(void)
{
  if (start_or_stop_butn.justPressed()) 
  {
    start_or_stop_butn.drawSmoothButton(!start_or_stop_butn.getState(), 3, TFT_BLACK, start_or_stop_butn.getState() ? "START" : "STOP");
    if (start_or_stop_butn.getState())
    {
      //start the stepper motor - code pending
    }
    else
    {
      //stop the stepper motor - code pending
    }
  }
}

/******************************************************************************
Function:     Clock_Butn_Press_Action
Description:  clock wise direction change button press event
Input:        nothing (uses some global variables)
Output:       nothing (modifies some global variables)
******************************************************************************/
void Clock_Butn_Press_Action(void)
{
  if(cw_butn.justPressed()) {
    cw_butn.drawSmoothButton(!cw_butn.getState(), 3, TFT_BLACK, cw_butn.getState() ? "CW" : "CW");
    ccw_butn.drawSmoothButton(!ccw_butn.getState(), 3, TFT_BLACK, ccw_butn.getState() ? "CCW" : "CCW");
    if (cw_butn.getState())
    {
      //change the direction to clock wise - code pending
    }
    else
    {
      //change the direction to counter clock wise - code pending
    }
  }
}

/******************************************************************************
Function:     Counter_Clock_Butn_Press_Action
Description:  Counter clock wise direction change button press event
Input:        nothing (uses some global variables)
Output:       nothing (modifies some global variables)
******************************************************************************/
void Counter_Clock_Butn_Press_Action(void)
{
  if(ccw_butn.justPressed()) {
    ccw_butn.drawSmoothButton(!ccw_butn.getState(), 3, TFT_BLACK, ccw_butn.getState() ? "CCW" : "CCW");
    cw_butn.drawSmoothButton(!cw_butn.getState(), 3, TFT_BLACK, cw_butn.getState() ? "CW" : "CW");
    if (ccw_butn.getState())
    {
      //change the stepper motor direction to counter clock wise - code pending
    }
    else
    {
      //change the stepper motor direction to clock wise - code pending
    }
  }
}
