#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - last digit
 * Return: Always(0)
 *
 *
 */
int main(void)
{
	int n, a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (a > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, a);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}
	return (0);
}




