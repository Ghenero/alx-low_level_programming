#include <stdio.h>
/**
 * main - print two digit pair combination
 *
 * Return: Always true(0)
 *
 */
int main(void)

{
	int a = 0;
	int b = 1;

	while (a < 99)
	{
		while (b < 100)
		{
			putchar((a / 10) + 48);
			putchar((a % 10) + 48);
			putchar(' ');
			putchar((b / 10) + 48);
			putchar((b % 10) + 48);
			if (a == 98 && b == 99)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			b++;
		}
		a++;
		b = a + 1;
	}
	putchar('\n');
	return (0);
}
