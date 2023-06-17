#include <stdio.h>
/**
 * main - Entry point
 * description:program that prints all single digit numbers of base
 * Return:always 0 (sucsses)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
