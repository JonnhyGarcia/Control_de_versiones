
#include <LEDs_and_SWs.h>
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MK64F12.h"
#include "fsl_debug_console.h"


extern uint8_t Flag_sw3;
extern uint8_t Flag_sw2;

int main(void) {

	BOARD_InitBootPins();

    while(1) {

    	if(TRUE == Flag_sw3)
    	{
    		Led_green_on_off(LED_ON);
    		Flag_sw3 = FALSE;
    	}
    	else if(TRUE == Flag_sw2)
    	{
    		Led_green_on_off(LED_OFF);
    		Flag_sw2 = FALSE;
    	}



    }
    return 0 ;
}
