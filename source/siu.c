/*
 *	Project Owner	: TU Chemnitz
 *	Project Name	: ASE Tutorial Unit-2
 *	File Name		: siu.c
 *	Author			: ASE Admin
 *  Created on		: 25 Feb 2024
 */

/* Includes ******************************************************************/
#include "siu.h"
#include "xpc56el.h"

/*
 * @brief	SIU pin configuration function
 *
 * @param	void
 * @retval	void
 */
void SIU_Init(void)
{
	// Configure all pins which are required for your task here

	/* TO-DO: your task implementations **************************************/

	/* Input pin configurations */


	    /* =================== INPUT CONFIGURATIONS =================== */
		SIU.PCR[60].R = 0x0100;   // BT1 (D[12])
	    SIU.PCR[62].R = 0x0100;   // BT2 (D[14])
	    SIU.PCR[52].R = 0x0100;   // SW1 (D[4])
	    SIU.PCR[53].R = 0x0100;   // SW2 (D[5])
	    SIU.PCR[54].R = 0x0100;   // SW3 (D[6])
	    SIU.PCR[55].R = 0x0100;   // SW4 (D[7])

	    /* =================== OUTPUT CONFIGURATIONS ================== */
	    SIU.PCR[56].R = 0x0200;   // P (Red LED) D[8]
	    SIU.PCR[57].R = 0x0200;   // Rx (Yellow LED) D[9]
	    SIU.PCR[58].R = 0x0200;   // Tx (Yellow LED) D[10]
	    SIU.PCR[59].R = 0x0200;   // U1 (Green LED) D[11]
	    SIU.PCR[43].R = 0x0200;   // U2 (Green LED) C[11]
	    SIU.PCR[6].R  = 0x0200;   // U3 (Green LED) A[6]

	    /* =================== ANALOG CONFIGURATIONS ================== */

	    SIU.PCR[66].R = 0x2500;   // POT (E[2])
	    SIU.PCR[32].R = 0x2500;   // LDR (C[0])

	    /* =================== ANALOG CONFIGURATIONS ================== */
}
