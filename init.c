
#include "s3c2440.h"


inline void disable_watchdog(void)
{
	WTCON = 0;	
}



