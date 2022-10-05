#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the result of the two number multiplied
 * @argc: arguments input tothe function
 * @argv: argument vectors that stores the strings in an array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int number_1, number_2, muitiply;

	if (argc != 3)
		printf("Error\n");
	else
	{
		number_1 = atoi(argv[1]);
		number_2 = atoi(argv[2]);
		muitiply = number_1 * number_2;
		printf("%d\n", muitiply);
	}
	return (0);
}

