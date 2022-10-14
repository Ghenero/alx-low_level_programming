#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: to separate the strings
 * @n: integer number of strings to print
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *c;
	va_list stringer;

	va_start(stringer, n);
	for (x = 0; x < n; x++)
	{
		c = va_arg(stringer, char *);
		if (c)
			printf("%s", c);
		else
			printf("(nil)");
		if (x < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(stringer);
}
