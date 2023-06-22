#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 * Return: on sucsses (1).
 *	on erorr (-1) is returned.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
