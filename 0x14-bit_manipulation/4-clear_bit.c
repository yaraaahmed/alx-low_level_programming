#include "main.h"

/**
 * clear_bit - sets the value of bit
 * @n: pointer number
 * @index: index for bit
 * Return: 1 for success, or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
