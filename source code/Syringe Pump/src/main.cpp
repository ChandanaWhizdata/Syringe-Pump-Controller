/*******************************************************************************
  Syringe Pump Control Source file 

  Company:
    Whizdata Solutions LLP.

  File Name:
    main.cpp

  Summary:
    This file contains all the functions related to syringe pump control

  Description:
    This file contains implementation of the main control functions
 
 *******************************************************************************/

/*******************************************************************************
Header Inclusions
*******************************************************************************/
#include <main.h>
#include <stepper.h>

void setup() {
  //begin serial for debugging
  Serial.begin(115200);

  System_Init();
}

void loop() {
  
}
