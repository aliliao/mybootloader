
#include "s3c2440.h"

#include "delay.h"
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
inline void led_set(enum led_no led, enum led_stat stat)
{
	 if (stat == on)
		GPFDAT &= ~(1<<led);		
	 else
		GPFDAT |= (1<<led);
}


void led_loop(void)
{
	led_cfg_as_output(LED1);
	led_cfg_as_output(LED2);
	led_cfg_as_output(LED4);

	while (1) {
		led_set(LED1, on);
		led_set(LED2, off);
		led_set(LED4, on);

		delay(10000);

		led_set(LED1, off);
		led_set(LED2, on);
		led_set(LED4, off);

		delay(10000);
	}
}


