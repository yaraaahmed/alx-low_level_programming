#include "main.h"

/**
 * print_binary - prints the binary
 * @n: number to print
*/
void print_binary(unsigned long int n)
{
	int x, con = 0;
	unsigned long int cur;

	for (x = 63; x >= 0; x--)
	{
		cur = n >> x;

		if (cur & 1)
		{
			_putchar('1');
			con++;
		}
		else if (con)
			_putchar('0');
	}
	if (!con)
		_putchar('0');
}
