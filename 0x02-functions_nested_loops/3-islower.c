#include "main.h"

/**
 *_islower - a function that show 1 if it is lower case
 *@c: integer tested
 *Return: Always(0)
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar(10);
}
