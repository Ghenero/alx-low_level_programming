#include "main.h"
/**
 * _abs - computes the absolute value
 * @c: integer as its parameter
 * Return: absolute value
 */
int _abs(int c)
{

	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
	_putchar('\n');
}
