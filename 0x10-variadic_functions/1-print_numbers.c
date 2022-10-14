#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator: string to be print between the numbers
 * @n:number of integer in function
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	int numz;
	va_list numbers;

	va_start(numbers, n);
	for (a = 0; a < n; a++)
	{
		numz = va_arg(numbers, int);
		printf("%d", numz);
		if (a < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
