#include <stdio.h>
/**
 * main - Entry point
 * description:program that prints different combinations of two digits.
 * Return:always 0 (sucsses)
*/
int main(void)
{
	int firstDigit = 0, seconDigit;

	while (firstDigit <= 99)
	{
		seconDigit = firstDigit;
		while (seconDigit <= 99)
		{
			if (SeconDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchat((seconDigit / 10) + 48);
				putchar((seconDigit % 10) + 48);

				if (firstDigit + seconDigit != 197)
				{
					putchar(',');
					putchar(' ');
				}
			}
			seconDigit++;
		}
		firstDigit++;
	}
	putchar('\n');

	return (0);
}
