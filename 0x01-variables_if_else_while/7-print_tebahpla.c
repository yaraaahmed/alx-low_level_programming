#include <stdio.h>

/**
 * main - Entry point
 * description:program that prints all single digit numbers of base
 * Return:always 0 (sucsses)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
