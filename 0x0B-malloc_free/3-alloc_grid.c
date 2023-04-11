#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  function that returns a pointer to a 2 dimensional
 * array of integers
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **) malloc(width * sizeof(int *));

	for (i = 0; i < width; i++)
	{
		ptr[i] = (int *) malloc(height * sizeof(int));
	}
	return (ptr);
}
