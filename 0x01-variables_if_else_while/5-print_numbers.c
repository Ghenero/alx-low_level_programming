#include <stdio.h>

/**
 * main - projects printing all single numbers of base 10
 *
 * Return: Always (0)
 *
 *
 */

int main(void)

{
	int a = 0;

	while (a <= 9)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}
