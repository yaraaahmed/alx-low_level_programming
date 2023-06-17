#include <stdio.h>

/**
 * main - Entry point
 * description:program that prints all possible combinations of numbers.
 * Return:always 0 (sucsses)
*/

int main(void)
{
int n = 0;
while (n <= 9)
{
putchar (n + 48);
if (n != 9)
{
putchar (',');
putchar (' ');
}
n++;
}
putchar ('\n');
return (0);
}
