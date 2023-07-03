#include "main.h"
/**
 * _memset -  fills a block of memory with a specific value
 * @s: startig address of memory to be filled
 * @b: the desired value
 * @n: numbers of bytes ti be changed
 * Return: changed array with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
		int i = 0;
		
		for (; n > 0; i++)
		{
			s[i] = b;
			n--;
		}
		return (s);
}
