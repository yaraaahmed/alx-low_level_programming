#include <stdio.h>

/**
 * main - Entry point
 * description:program that prints all the numbers of base in lowercase
 * Return:always 0 (sucsses)
*/

int main(void)
{
int n = 0;
char ch = 'a';
while (n <= 9)
{
putchar (n + 48);
n++;
}
while (ch <= 'f')
{
putchar (ch);
ch++;
}
putchar('\n');
return (0);
}
