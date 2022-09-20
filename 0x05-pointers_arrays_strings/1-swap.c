#include "main.h"

/**
 * swap_int - swap two integers value and ouput the result
 * @a: first integer
 * @b: second integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int change = *a;

	*a = *b;
	*b = change;
}
