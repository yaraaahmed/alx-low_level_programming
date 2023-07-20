#include "variadic_function.h"
#include<stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters
 * @n: the number of paramters passed to function
 * @...: A variable number of paramters to calc the sum
 * Return: if n == 0 - 0.
 *	otherwise - the sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
