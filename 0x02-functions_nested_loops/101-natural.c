#include <stdio.h>
#include "main.h"

/*
 * main - prints counts of multiples
 *	of 3 or 5 below 1024
 *Discription:prints counts of multiples.
 * Return: always 0 (sucsses)
*/

int main(void)
{
	int num, sum;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
		}
			printf("%d\n", sum);
			return (0);
}
