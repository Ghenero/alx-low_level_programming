#include "main.h"

/**
 * print_alphabet - program that print the lowercase alphabets
 *
 * Return: Always true(0)
 *
 */

void print_alphabet(void)

{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
