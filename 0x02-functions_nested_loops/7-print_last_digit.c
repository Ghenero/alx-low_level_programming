#include "main.h"

/**
 * print_last_digit - outputs the last digit
 * @a: input as an integer
 * Return: the last digit value
 */
int print_last_digit(int a)
{
	int i;

	i = a % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
	_putchar('\n');
}
