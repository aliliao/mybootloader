
#include "s3c2440.h"
#include "led.h"

/* @led  - LED1, LED2,4,8
 */
inline void led_cfg_as_output(enum led_no led)
{
	GPFCON &= ~(3<<(led*2));
	GPFCON |=  (1<<(led*2))	;
}


/* @led  - LED1, LED2,4,8
 * @stat - 0 OR 1
 */
int led_set(enum led_no led, enum led_stat stat)
{
	 if (stat == 0) {
		GPFDAT &= ~(1<<led);		
		return 0;
	 } else if (stat == 1) {
		GPFDAT |= (1<<led);
		return 0;
	 }

	 return -1;
}


void led_loop(void)
{
	led_cfg_as_output(LED1);
	led_cfg_as_output(LED2);
	led_cfg_as_output(LED4);

	led_set(LED1, on);
	led_set(LED2, off);
	led_set(LED4, on);

	while (1)
		;
}


