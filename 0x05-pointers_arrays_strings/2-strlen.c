#include "main.h"
#include <string.h>

/**
 * _strlen -  function that returns the length of a string
 *
 * @s: string
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
