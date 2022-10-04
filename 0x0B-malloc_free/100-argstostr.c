#include "main.h"

/**
 * len- returns lenght of str
 * @str: string counted
 * Return: return the lenght
 */

int len(char *str)
{
	int len = 0

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}
/**
 * argstostr - function that concatenates all the program's argument
 * @ac: count of args passed to the function
 * @av: array of arguments
 * Return: pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	char *new_string = NULL;
	int a = 0, b = ac, c, sum = 0, temp = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (ac--)
		sum += (len(av[ac]) + 1);
	new_string = (char *) malloc(sum + 1);
	if (new_string != NULL)
		while (a < b)
		{
			for (c = 0; av[a][c] != '\0'; c++)
				new_string[c + temp] = av[a][c];
			new_string[temp + c] = '\n';
			temp += (c + 1);
			a++;
		}
		new_string[temp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (new_string);


