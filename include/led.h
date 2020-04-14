
#ifndef __LED_H
#define __LED_H


/*
 * nLED_1 - D10 - EINT4/GPF4
 * nLED_2 - D11 - EINT5/GPF5
 * nLED_4 - D12 - EINT6/GPF6
 * nLED_8 - ... - EINT7/GPF7
 */

enum led_no {
	LED1 = 4,
	LED2 = 5,
	LED4 = 6, 
	LED8 = 7,
};

enum led_stat {
	on  = 0,
	off = 1,
};


/* @led  - LED1, LED2,4,8
 */
void led_cfg_as_output(enum led_no led);


/* @led  - LED1, LED2,4,8
 * @stat - 0 OR 1
 */
int led_set(enum led_no led, enum led_stat stat);



#endif /* __LED_H */

