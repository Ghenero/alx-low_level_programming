#include <unistd.h>

/**
 * main - Print a statement
 *
 * Return: Always 1 (success)
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, msg, 59);
	return (1);
}
