#include"main.h"

/**
 * _isalpha - A function that print letter
 * @c: inter that represent letter
 * Return: Always(0)
 */
int _isalpha(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	return 0;
}
