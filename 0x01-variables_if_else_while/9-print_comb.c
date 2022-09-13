#include <stdio.h>

/**
 * main - print all single digit numbers separated by colon and spaces
 *
 * Return: always(0)
 *
 */

int main(void)

{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		a++;
		if (a != 58)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
