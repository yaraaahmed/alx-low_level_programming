#include "main.h"
/**
 * main - Entry point
 * description: prints _putchar using putchar
 * Return:always 0 (sucsses)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
