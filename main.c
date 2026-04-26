/*
 *	Project Owner	: TU Chemnitz
 *	Project Name	: ASE Tutorial Unit-1
 *	File Name		: main.c
 *	Author			: ASE Admin
 *  Created on		: 25 Feb 2024
 */

/* Includes ******************************************************************/
#include "init.h"

#include "xpc56el.h"
#include "siu.h"

/* Global variables **********************************************************/
// put any global variables you need here



/* Task-1 implementation *****************************************************/


/*


*/

void potentionmeter_light_sensor(int x)
{	
	/* TO-DO: your task implementations **************************************/
	SIU.GPDO[56].R = 0; // P (Red)
	SIU.GPDO[57].R = 0; // Rx (Yellow)
	SIU.GPDO[58].R = 0; // Tx (Yellow)
	SIU.GPDO[59].R = 0; // U1 (Green)
	SIU.GPDO[43].R = 0; // U2 (Green)
	SIU.GPDO[6].R = 0;	// U3 (Green)

	if( x < 682 )
	{	
		SIU.GPDO[56].R = 1; // P (Red)
	}else if( x >= 682 && x < 1364)
	{	
		SIU.GPDO[56].R = 1; // P (Red)
		SIU.GPDO[57].R = 1; // Rx (Yellow)
	}else if( x >= 1364 && x < 2046 )
	{
		SIU.GPDO[56].R = 1; // P (Red)
		SIU.GPDO[57].R = 1; // Rx (Yellow)
		SIU.GPDO[58].R = 1; // Tx (Yellow)
	}else if( x >= 2046 && x < 2728 )
	{	
		SIU.GPDO[56].R = 1; // P (Red)
		SIU.GPDO[57].R = 1; // Rx (Yellow)
		SIU.GPDO[58].R = 1; // Tx (Yellow)
		SIU.GPDO[59].R = 1; // U1 (Green)
	}else if( x >= 2728 && x <= 3410)
	{
		SIU.GPDO[56].R = 1; // P (Red)
		SIU.GPDO[57].R = 1; // Rx (Yellow)
		SIU.GPDO[58].R = 1; // Tx (Yellow)
		SIU.GPDO[59].R = 1; // U1 (Green)
		SIU.GPDO[43].R = 1; // U2 (Green)

	}else{

		SIU.GPDO[56].R = 1; // P (Red)
		SIU.GPDO[57].R = 1; // Rx (Yellow)
		SIU.GPDO[58].R = 1; // Tx (Yellow)
		SIU.GPDO[59].R = 1; // U1 (Green)
		SIU.GPDO[43].R = 1; // U2 (Green)
		SIU.GPDO[6].R = 1;	// U3 (Green)
	}


}


void task_pot(int x)
{

	/* TO-DO: your task implementations **************************************/
	SIU.GPDO[56].R = 0; // P (Red)
	SIU.GPDO[57].R = 0; // Rx (Yellow)
	SIU.GPDO[58].R = 0; // Tx (Yellow)
	SIU.GPDO[59].R = 0; // U1 (Green)
	SIU.GPDO[43].R = 0; // U2 (Green)
	SIU.GPDO[6].R = 0;	// U3 (Green)

	/* Map potentiometer value (0–4095) to LEDs */

	if (x < 682)
	{
		//SIU.GPDO[59].R = 0; // U1 (Green)
		//SIU.GPDO[43].R = 0; // U2 (Green)
		//SIU.GPDO[6].R = 0;	// U3 (Green)
		//SIU.GPDO[58].R = 0; // Tx (Yellow)
		//SIU.GPDO[57].R = 0; // Rx (Yellow)
		SIU.GPDO[56].R = 1; // P (Red)
	}
	else if (x < 1364)
	{
		SIU.GPDO[56].R = 1; // P (Red)
		SIU.GPDO[57].R = 1; // Rx (Yellow)
		//SIU.GPDO[58].R = 0; // Tx (Yellow)
		//SIU.GPDO[59].R = 0; // U1 (Green)
		//SIU.GPDO[43].R = 0; // U2 (Green)
		//SIU.GPDO[6].R = 0;	// U3 (Green)
	}
	else if (x < 2046)
	{
		SIU.GPDO[56].R = 1; // P (Red)
		SIU.GPDO[57].R = 1; // Rx (Yellow)
		SIU.GPDO[58].R = 1; // Tx (Yellow)
		//SIU.GPDO[59].R = 0; // U1 (Green)
		//SIU.GPDO[43].R = 0; // U2 (Green)
		//SIU.GPDO[6].R = 0;	// U3 (Green)
	}
	else if (x < 2728)
	{
		SIU.GPDO[56].R = 1; // P (Red)
		SIU.GPDO[57].R = 1; // Rx (Yellow)
		SIU.GPDO[58].R = 1; // Tx (Yellow)
		SIU.GPDO[59].R = 0; // U1 (Green)
		SIU.GPDO[43].R = 0; // U2 (Green)
		SIU.GPDO[6].R = 1;	// U3 (Green)
	}
	else if (x < 3410)
	{
		SIU.GPDO[56].R = 1; // P (Red)
		SIU.GPDO[57].R = 1; // Rx (Yellow)
		SIU.GPDO[58].R = 1; // Tx (Yellow)
		SIU.GPDO[59].R = 0; // U1 (Green)
		SIU.GPDO[43].R = 1; // U2 (Green)
		SIU.GPDO[6].R = 1;	// U3 (Green)
	}
	else
	{
		SIU.GPDO[56].R = 1; // P (Red)
		SIU.GPDO[57].R = 1; // Rx (Yellow)
		SIU.GPDO[58].R = 1; // Tx (Yellow)
		SIU.GPDO[59].R = 1; // U1 (Green)
		SIU.GPDO[43].R = 1; // U2 (Green)
		SIU.GPDO[6].R = 1;	// U3 (Green)
	}
}

/*************************************************************************/

/* Task-2 implementation *****************************************************/
void task_ldr(int ldr_value)
{
	/* TO-DO: your task implementations **************************************/
	SIU.GPDO[56].R = 0; // P (Red)
	SIU.GPDO[57].R = 0; // Rx (Yellow)
	SIU.GPDO[58].R = 0; // Tx (Yellow)
	SIU.GPDO[59].R = 0; // U1 (Green)
	SIU.GPDO[43].R = 0; // U2 (Green)
	SIU.GPDO[6].R = 0;	// U3 (Green)

	if (ldr_value < 682)
	{
		SIU.GPDO[56].R = 1; // Only P ON
	}
	else if (ldr_value < 1364)
	{
		SIU.GPDO[56].R = 1; // P
		SIU.GPDO[57].R = 1; // Rx
	}
	else if (ldr_value < 2046)
	{
		SIU.GPDO[56].R = 1; // P
		SIU.GPDO[57].R = 1; // Rx
		SIU.GPDO[58].R = 1; // Tx
	}
	else if (ldr_value < 2728)
	{
		SIU.GPDO[56].R = 1; // P
		SIU.GPDO[57].R = 1; // Rx
		SIU.GPDO[58].R = 1; // Tx
		SIU.GPDO[6].R = 1;	// U3
	}
	else if (ldr_value < 3410)
	{
		SIU.GPDO[56].R = 1; // P
		SIU.GPDO[57].R = 1; // Rx
		SIU.GPDO[58].R = 1; // Tx
		SIU.GPDO[6].R = 1;	// U3
		SIU.GPDO[43].R = 1; // U2
	}
	else
	{
		// All LEDs ON
		SIU.GPDO[56].R = 1; // P
		SIU.GPDO[57].R = 1; // Rx
		SIU.GPDO[58].R = 1; // Tx
		SIU.GPDO[6].R = 1;	// U3
		SIU.GPDO[43].R = 1; // U2
		SIU.GPDO[59].R = 1; // U1
	}
}
/*************************************************************************/

/* Task-3 implementation *****************************************************/
void task_counter(int value)
{

	/* TO-DO: your task implementations **************************************/
	SIU.GPDO[59].R = (value >> 2) & 1; // U1 (bit 2)
	SIU.GPDO[43].R = (value >> 1) & 1; // U2 (bit 1)
	SIU.GPDO[6].R = (value >> 0) & 1;  // U3 (bit 0)

	/*************************************************************************/
}
/*
 * @brief	Main program
 *
 * @param	void
 * @retval	int
 */

volatile int counter_led = 7 ;
volatile int counter_led_value = 0 ;

volatile int counter_value = 0;
volatile int count_up = 1;

int main(void)
{
	/* peripherals initialization, do not remove */
	peripheralsInit();

	/* TO-DO: your task implementations **************************************/

	/* Configure and start timer channels */
	// PIT_ConfigureTimer(<channel>, <interval in milliseconds>);
	PIT_ConfigureTimer(1, 1000);
	PIT_StartTimer(1);
	/*************************************************************************/

	/* main program */
	while (1)
	{
		/* System function, do not remove */
		systemFunction();
		/* TO-DO: your task implementations **********************************/
		int pot_value = (ADC0.CDR[5].R & 0x00000FFF); // Potentiometer
		int ldr_value = (ADC1.CDR[3].R & 0x00000FFF); // Light sensor

		int sw1 = SIU.GPDI[52].R; // Switch 1
		int sw2 = SIU.GPDI[53].R; // Switch 2
		int sw3 = SIU.GPDI[54].R; // Switch 3
		int sw4 = SIU.GPDI[55].R; // Switch 4 it maybe off, but i on it manually 
		int bt1 = SIU.GPDI[60].R; // Button 1
		int bt2 = SIU.GPDI[62].R; // Button 1

		/// Just for practice 
		/// simple practice 

		// Task 1 is completed
		if( sw1 == true && sw2 == false && sw3 ==  false && sw4 ==  false )
		{
			potentionmeter_light_sensor(pot_value);
		}else if( sw1 == false && sw2 == true )
		{	// Task 2 
			potentionmeter_light_sensor(ldr_value);
		}


		/*
		if( bt1 == 1 )
		{
			SIU.GPDO[59].R = 1; // U1 (Green)
			SIU.GPDO[56].R = 0; // P
		}
		else if( bt2 == 1)
		{
			SIU.GPDO[56].R = 1; // P
		}
		else if( sw2 == 1 )
		{	
			SIU.GPDO[56].R = 1; // P
			if( bt1 == 1 )
			{
				SIU.GPDO[56].R = 0; // P
			}
		}

		*/

		/// end practice here
		/* 
		if (sw1 == 1)
		{
			// Task 1 active (Potentiometer)
			task_pot(pot_value);
		}
		else if (sw1 == 0 && sw2 == 1)
		{
			// Task 2 active (Light Sensor)
			task_ldr(ldr_value);
		}

		else // SW1 is OFF, SW2 is OFF
		{
			if (sw3 == 1)
			{
				// --- Task 3/4 Active: SW1=0, SW2=0, SW3=1 ---
				if (bt1 == 1)
					count_up = 1;
				if (bt2 == 1)
					count_up = 0;
			}
			else
			{
				// --- DEFAULT OFF STATE: All Task Switches are OFF (SW1=0, SW2=0, SW3=0) ---
				// Turn off all LEDs otherwise (write '1' to turn OFF)
				SIU.GPDO[56].R = 0; // P
				SIU.GPDO[57].R = 0; // Rx
				SIU.GPDO[58].R = 0; // Tx
				SIU.GPDO[59].R = 0; // U1
				SIU.GPDO[43].R = 0; // U2
				SIU.GPDO[6].R = 0;	// U3
			}
		}
		*/

		/*********************************************************************/

		/* 10 ms OS delay */
		osalThreadDelayMilliseconds(10UL);
	}
	return 0;
}

/*
 * @brief	PIT timer channel 1 IRQ callback
 *
 * @param	void
 * @retval	void
 */
/*
 * @brief	PIT timer channel 1 IRQ callback
 *
 * @param	void
 * @retval	void
 */
void PIT_Channel_1(void)
{	
	
	/* TO-DO: your task implementations **************************************/
	int sw4 = SIU.GPDI[55].R; // Switch 4 it maybe off, but i on it manually 
	int sw1 = SIU.GPDI[52].R; // Switch 1
	if( sw4 ==  true )
	{
		if(counter_led)
		{
			counter_led_value-- ;
		}else{
			counter_led_value++;
		}

		if( counter_led_value > 7 )
		{
			counter_led_value = 0 ;
		}else if( counter_led_value < 0){
			counter_led_value = 7 ;
		}

	}
	// Display the counter value on LEDs (U1, U2, U3)
	SIU.GPDO[59].R = (counter_led_value >> 2) & 1; // U1 (bit 2)
	SIU.GPDO[43].R = (counter_led_value >> 1) & 1; // U2 (bit 1)
	SIU.GPDO[6].R = (counter_led_value >> 0) & 1;  // U3 (bit 0)
	/*************************************************************************/
	/* TO-DO: your task implementations **************************************/
	
	

	/*************************************************************************/
}

/*a
 * @brief	PIT timer channel 2 IRQ callback
 *
 * @param	void
 * @retval	void
 */
void PIT_Channel_2(void)
{

	/* TO-DO: your task implementations **************************************/
	int sw4 = SIU.GPDI[55].R; // Switch 4 it maybe off, but i on it manually 
	int sw1 = SIU.GPDI[52].R; // Switch 1
	if( sw4 ==  true)
	{
		if(counter_led)
		{
			counter_led_value++ ;
		}else{
			counter_led_value--;
		}

		if( counter_led_value > 7 )
		{
			counter_led_value = 0 ;
		}else if( counter_led_value < 0){
			counter_led_value = 7 ;
		}

	}
	// Display the counter value on LEDs (U1, U2, U3)
	SIU.GPDO[59].R = (counter_led_value >> 2) & 1; // U1 (bit 2)
	SIU.GPDO[43].R = (counter_led_value >> 1) & 1; // U2 (bit 1)
	SIU.GPDO[6].R = (counter_led_value >> 0) & 1;  // U3 (bit 0)
	/*************************************************************************/
}

/*
 * @brief	PIT timer channel 3 IRQ callback
 *
 * @param	void
 * @retval	void
 */
void PIT_Channel_3(void)
{

	/* TO-DO: your task implementations **************************************/

	/*************************************************************************/
}