/*
 * main.c
 *
 *  Created on: Dec 3, 2021
 *      Author: WIN 10
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO.h"
#include "DIO_Config.h"
#include <util/delay.h>

u8 main(void) {
	DIO_Int();
while (1) {
 if (DIO_GetPinValue(DIO_PortB, PIN0) != 0)
  {
	  DIO_SetPinValue (DIO_PortA , PIN0 , High) ;
  }
 else if (DIO_GetPinValue(DIO_PortB, PIN1) != 0)
  {
 	  DIO_SetPinValue (DIO_PortA , PIN1 , High) ;
   }
 else  if (DIO_GetPinValue(DIO_PortB, PIN2) != 0)
  {
 	  DIO_SetPinValue (DIO_PortA , PIN0 , High) ;
 	  DIO_SetPinValue (DIO_PortA , PIN1 , High) ;
   }
  else
  {
	  DIO_SetPinValue (DIO_PortA , PIN0 , Low) ;
	  	  DIO_SetPinValue (DIO_PortA , PIN1 , Low) ;
  }
}
}
