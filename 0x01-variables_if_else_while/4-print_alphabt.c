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
if (ch == 'e' || ch == 'q')
ch++;
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
