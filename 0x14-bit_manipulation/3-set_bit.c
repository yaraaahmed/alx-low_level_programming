#include "main.h"
/**
 * set_bit - sets a bit to give index
 * @n: pointer
 * @index: index to bit
 * Return: 1 for success, or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
