/*******************************************************************************
  System Definitions

  File Name:
    main.h

  Summary:
    Header file which shares global variables and function prototypes.

  Description:
    This file contains the global variables and function prototypes for a syringe pump control project.

 *******************************************************************************/

// ensure this library description is only included once
#ifndef MASTER_H
#define MASTER_H

/*******************************************************************************
Header Inclusions
*******************************************************************************/
#include <Arduino.h>

/*******************************************************************************
Function prototypes
*******************************************************************************/
void System_Init(void);

#endif  //MASTER_H