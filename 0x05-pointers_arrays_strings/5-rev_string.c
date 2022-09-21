#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string to be reverse
 *
 * Return: Always (0)
 */

void rev_string(char *s)
{
	int x, reversed, len = _strlen(s);

	for (x = 0; x < len / 2; x++)
	{
		reversed = *(s + x);
		*(s + x) = *(s + len - x - 1);
		*(s + len - x - 1) = reversed;
	}
}

/**
 * _strlen - return the lenght of the string
 * @s: the string that is to be returned
 * Return: Always(0)
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
