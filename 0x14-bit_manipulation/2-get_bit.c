#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: number for search
 * @index: index bit
 * Return: value to bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);

	b = (n >> index) & 1;

	return (b);
}
