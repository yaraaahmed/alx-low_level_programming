#include "main.h"

/*
 * _isupper - function that checks for uppercase character.
 * @c: input alphabet
 * Return: 1 if `c` is uppercase, 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
