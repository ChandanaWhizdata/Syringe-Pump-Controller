/*******************************************************************************
  System Definitions

  File Name:
    tft_display.h

  Summary:
    Header file which shares global variables and function prototypes.

  Description:
    This file contains the global variables and function prototypes for a TFT display control.

 *******************************************************************************/

// ensure this library description is only included once
#ifndef TFT_DISPLAY_H
#define TFT_DISPLAY_H

/*******************************************************************************
Header Inclusions
*******************************************************************************/
#include <Arduino.h>
#include "TFT_eSPI.h"               // Hardware-specific library
#include "TFT_eWidget.h"            // Widget library

/*******************************************************************************
Definitions
*******************************************************************************/
TFT_eSPI tft = TFT_eSPI(); 

/*******************************************************************************
Function prototypes
*******************************************************************************/
void TFT_Init(void);

#endif  //TFT_DISPLAY_H