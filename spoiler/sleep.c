/*
 * sleep.c
 */

#include <time.h>

#ifdef __STDC__
void
sleep(unsigned secs)
#else
void
sleep(secs)
unsigned secs;
#endif
{
	clock_t start, now;

	start = clock();
	do {
		now = clock();
	} while ((now - start) / CLK_TCK < secs);
}

