#include "main.h"

/**
 * alloc_grid - return a pointer to 2 dimensional array of integers
 * @width:width of array
 * @height: height of array
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int a = 0, b;

	if (width == 0 || height == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (a = 0; a < height; a++)
		{
			array[a] = (int *) malloc(sizeof(int) * width);
			if (array[a] != NULL)
			{
				for (b = 0; b < width; b++)
				{
					array[a][b] = 0;
				}
			}
			else
			{
				while (a >= 0)
				{
					free(array[a]);
					a--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
