#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: element of array
 * @size: size of array
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	str = malloc(nmemb * size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		((char *)str)[i] = 0;
	}
	return (str);
}
