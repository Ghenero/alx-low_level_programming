#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter
 * @str:String to be copied
 * Return: NULL in case of error,pointer to allocated space
 */

char *_strdup(char *str)

{
	char *aqua;
	int index, len;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;
	aqua = malloc(sizeof(char) * (len + 1));
	if (aqua == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
	{
		aqua[index] = str[index];
	}
	aqua[len] = '\0';
	return (aqua);
}
