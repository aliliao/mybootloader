

/*
 *  my bootloader 
 */

.text
.global _start
_start:

	/* ## 1. 设置栈 */
	ldr sp, =1024*4

	/* ## 2. 关看门狗 */
	bl disable_watchdog

	/* ## 3. 提升系统时钟性能 */
	bl clock_init

	/* ## 3. LED blink */
	bl led_loop

halt:
	b halt

