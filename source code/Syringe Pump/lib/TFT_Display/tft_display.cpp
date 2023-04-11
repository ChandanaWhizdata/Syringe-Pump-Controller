/*******************************************************************************
  TFT Display Source file 

  Company:
    Whizdata Solutions LLP.

  File Name:
    tft_display.cpp

  Summary:
    This file contains all the functions related to TFT display control

  Description:
    This file contains implementation of the display
 
 *******************************************************************************/

/*******************************************************************************
Header Inclusions
*******************************************************************************/
#include <tft_display.h>
#include <my_buttons.h>
#include <my_texts.h>

/*******************************************************************************
Functions
*******************************************************************************/

/******************************************************************************
Function:     TFT_Init
Description:  TFT display initialization
Input:        nothing (uses some global variables)
Output:       nothing (modifies some global variables)            
******************************************************************************/
void TFT_Init(void)
{
  tft.begin();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  
  Buttons_Init();
}