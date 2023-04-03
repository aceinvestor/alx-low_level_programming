#include "main.h"
#include <string.h>

/**
 * *_strpbrk -  function that searches a string for any of a set of bytes
 *
 * @s: string
 * @accept: source
 *
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	char *f;

	f = strpbrk(s, accept);
	if (f == NULL)
	{
		return (NULL);
	}
	else
	{
		return (f);
	}
}
