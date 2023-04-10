---
parent: Syringe Pump
title: syringe pump controller
has_children: false
has_toc: false
---

# Syringe Pump Controller

Syringe Pump is used to inject the solutions with required amount automatically using stepper motor

## Description

This project is mainly control the stepper motor using S4D driver and custom library.


## S4D - OPEN LOOP STEP MOTOR DRIVE 

S4D is the digital stepper motor driver, using the latest 32-bit ARM digital processing technology, drive control algorithm using advanced variable current technology and advanced frequency technology, the driver heat small, motor vibration small, smooth operation.

User Manual for connections and information of the S4D is as below,

![S4D User Manual](docs/S4D_Stepper_Motor_Driver.pdf)

## Stepper motor

Stepper motor used for this project is of 4 phase.

DataSheet of the stepper motor is as below,

![Stepper datasheet](docs/Stepper_Data_Sheet_FL42STH33_0956AF.pdf)

### Pin Configurations

Pin Configurations required to connect the stepper motor, stepper motor driver and MCU in Test_eSPI_Setup file and also stepper.h file.




