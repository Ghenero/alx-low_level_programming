#include "main.h"
#include <stdlib.h>

/**
 * array_range - creating an array of integers
 * @min: first integer number
 * @max: last integer number
 * Return: pointer to new memory allocted
 */
int *array_range(int min, int max)
{
	int a, b;
	int *i;

	if (min > max)
		return (NULL);
	b = max - min + 1;
	i = malloc(sizeof(int) * b);
	if (i == NULL)
		return (NULL);
	for (a = 0; a < b; a++, min++)
	{
		i[a] = min;
	}
	return (i);
}
