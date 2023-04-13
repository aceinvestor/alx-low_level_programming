#include "main.h"
#include <stdlib.h>

/**
 * array_range -  function that creates an array of integers
 *
 * @min: minimum value of integer
 * @max: maximum value of integer
 *
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *str;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	str = (int *) malloc((max - min + 1) * sizeof(int));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max - min; i++)
	{
		str[i] = min + i;
	}
	return (str);
}
