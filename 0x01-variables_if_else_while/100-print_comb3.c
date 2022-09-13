#include <stdio.h>
/**
 * main - print two digit combination without repeatition in ancending order
 *
 * Return: Always true(0)
 *
 *
 */

int main(void)

{

	int a = 48;
	int b = 48;

	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);
				if (b == 57 && a == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
