#include "main.h"

/**
 * flip_bits - counts number of bits
 * @n: first number
 * @m: second number
 * Return: number of bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, con = 0;
	unsigned long int cur;
	unsigned long int e = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		cur = e >> x;
		if (cur & 1)
			con++;
	}

	return (con);
}
