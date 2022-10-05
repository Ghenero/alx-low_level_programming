#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number to make change for money amounts
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: 0 if no errors else 1
 */

int main(int argc, char *argv[])
{
	int a, b = 0, c, d;
	int e[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	if (a <= 0)
	{
		puts("0");
		return (1);
	}
	else
	{
		for (c = 0; c < 5; c++)
		{
			d = a / e[c];
			a -= d * e[c];
			b += d;
			if (a == 0)
				break;
		}
	}
	printf("%d\n", b);
	return (0);
}
