#include <stdio.h>

/**
 * main - print all single digit base 10 number using putchar
 *
 * Return: Always (0)
 *
 */

int main(void)

{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
