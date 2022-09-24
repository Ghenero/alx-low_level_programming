#include "main.h"

/**
 * _strcat - a function that concatenates two string
 * the string pointed to by @src and the end of the string pointed to by @dest
 * @dest: String that will be appended
 * @src: string to be concatenated upon
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
