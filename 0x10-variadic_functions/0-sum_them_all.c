#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameter
 * @n: number of parameters
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	va_start(ap, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
