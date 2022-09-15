#include "main.h"

/**
 * print_alphabet_x10 - A program that print lowercase alphabets 10 times
 *
 * Return: always true(0)
 *
 */

void print_alphabet_x10(void)

{
	int a = 0;
	int b = 97;

	for (a = 0; a <= 9; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar(10);
	}
}

