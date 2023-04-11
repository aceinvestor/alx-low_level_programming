#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  function that creates an array of chars, and initializes it
 * with a specific char
 *
 * @size: size of array
 * @c: character
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(array + i) = c;
	}
	return (array);
}
