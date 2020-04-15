
#include "s3c2440.h"


inline void disable_watchdog(void)
{
	WTCON = 0;	
}


inline void clock_init(void)
{
	/* # Goal:
	 * · Fclk = 400MHz (Up to 400MHz)
	 * · Hclk = 100MHz (Up to 136MHz)
	 * · Pclk = 50MHz  (Up to 68MHz)
	 */

	/* Fclk = 400MHz */
	MPLLCON = (92<<12) | (1<<4) | (1<<0);

	/* HCLK = FCLK/4 & PCLK = HCLK/2*/
	CLKDIVN = (2<<1) | (1<<0);
	CAMDIVN &= ~(1<<9);

	/* MMU_SetAsyncBusMode [See.Datasheet.Note] */
	__asm__ __volatile__(
		"mrc p15,0,r0,c1,c0,0\r\n"
		"orr r0,r0,#0xC0000000\r\n" // #R1_nF:OR:R1_iA
		"mcr p15,0,r0,c1,c0,0\r\n"
	);
}

