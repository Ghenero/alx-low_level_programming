#include <stdio.h>
#include "main.h"

/**
 * puts2 - print every other character
 * @str: string to be printed
 * Return: Always true(0)
 */

void puts2(char *str)
{
	int x;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(*(str + i));
			i++;
		}
		putchar(\n);
	}
	return (0);
}
