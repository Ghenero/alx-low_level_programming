#include <stdio.h>
/**
 * main - print two digit pair combination
 *
 * Return: Always true(0)
 *
 */
int main(void)

{
	unsigned char abc = 0;
	unsigned char xyz = 1;

	while (abc < 99)
	{
		while (xyz < 100)
		{
			putchar((abc / 10) + 48);
			putchar((abc % 10) + 48);
			putchar(' ');
			putchar((xyz / 10) + 48);
			putchar((xyz % 10) + 48);
			if (abc == 98 && xyz == 99)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			xyz++;
		}
		abc++;
		xyz = abc + 1;
	}
	putchar('\n');
	return (0);
}
