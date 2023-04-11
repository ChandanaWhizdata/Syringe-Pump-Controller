/*******************************************************************************
  TFT Texts Source file 

  Company:
    Whizdata Solutions LLP.

  File Name:
    my_texts.cpp

  Summary:
    This file contains all the functions related to TFT texts control

  Description:
    This file contains implementation of the display
 
 *******************************************************************************/

/*******************************************************************************
Header Inclusions
*******************************************************************************/
#include <my_texts.h>
#include <tft_display.h>

/******************************************************************************
Function:     Texts_Init
Description:  texts initialiZATION
Input:        nothing (uses some global variables)
Output:       nothing (modifies some global variables)
******************************************************************************/
void Texts_Init(void)
{
  texts_display();
}

/******************************************************************************
Function:     texts_display
Description:  TFT texts displaying
Input:        nothing (uses some global variables)
Output:       nothing (modifies some global variables)
******************************************************************************/
void texts_display(void)
{
  //rotations head
  tft.setTextColor(TFT_WHITE);
  tft.drawString("Duration",40,140);
  tft.drawString("Rotations",40,40);
  
  //timer update - code pending
}