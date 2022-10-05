#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add numbers
 * @argc: number of arguments passed to the functions
 * @argv: argument vector of pointers to string
 * Return: 0 if no errors else 1
 */

int main(int argc, char *argv[])
{
	int a = 0, b, c;

	for (b = 1; b < argc; b++)
	{
		for (c = 0; c < argv[b][c]; c++)
		{
			if (isdigit(argv[b][c]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (b = 1; b < argc; b++)
	{
		a += atoi(argv[b]);
	}
	printf("%d\n", a);
	return (0);
}
