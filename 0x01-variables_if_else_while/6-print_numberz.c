#include <stdio.h>

/**
 * main - Entry point
 * description:program that prints all single digit numbers
 * Return:always 0 (sucsses)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
	putchar(digit + '0');
	digit++;
	}
	putchar('\n');

	return (0);
}
