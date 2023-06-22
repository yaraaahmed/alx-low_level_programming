#include "main.h"

/*
 * _isupper - Check if the letter is upper
 * @x: The number to be checked
 * Return: 1 if `c` is uppercase, 0 if not
*/

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
