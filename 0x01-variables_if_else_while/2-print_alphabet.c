#include <stdio.h>

/**
 * main - print lower alphabet
 * Return: always true(0)
 *
 *
 */
int main(void)

{
	int a = 97;

	while (a <= 122)

	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
