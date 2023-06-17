#include <stdio.h>
/**
 * main - Entry point
 * description:program that prints the alphabet in lowercase
 * Return:always 0 (sucsses)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	char ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
