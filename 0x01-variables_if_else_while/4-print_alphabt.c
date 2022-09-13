#include <stdio.h>

/**
 * main - print all the lower alphabet without q and e
 *
 * Return: always true(0)
 *
 */

int main(void)

{
	int a = 97;

	for (a = 97; a < 123; a++)
	{
		if (a != 113 && a != 101)
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
