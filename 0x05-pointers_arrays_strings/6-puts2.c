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

	while (*(str + x) != '\0')
	{
		if (x % 2 == 0)
		{
			putchar(*(str + x));
			x++;
		}
		putchar('\n');
	}
}
