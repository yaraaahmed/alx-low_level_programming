#include <stdio.h>
/**
 * main - Entry point
 * description:program that prints the alphabet in lowercase
 * Return:always 0 (sucsses)
*/

int main(void)
{
	char ch = 'a';
	char ch = 'A';

	/*print a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z*/
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
