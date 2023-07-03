#include "main.h"
/**
 * _memset -  fills a block of memory with a specific value
 * @s: startig address of memory to be filled
 * @b: the desired value
 * @n: numbers of bytes ti be changed
 * Return: Always 0 (sucsses)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for ( i = 0; i < n; i++)
		s[i] = b;
	return (s)
}
