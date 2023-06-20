#include "main.h"

/**
 * jack_bauer -  prints every minute of the day
*/

void jack_bauer(void)
{
	int min, hur;

	for (hur = 0; hur <= 23; hur++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hur / 10) + 48);
			_putchar((hur % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
