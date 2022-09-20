include "main.h"

/**
 * swap int - swap two integers value and ouput the result
 * @a: first integer
 * @b: second integer
 * Return: Always true(0)
 */

void swap_int(int *a, int *b)

{
	int change = *a;

	*a = *b;
	*b = *change;
}
