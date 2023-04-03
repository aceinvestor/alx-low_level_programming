#include "main.h"
#include <string.h>

/**
 * *_strchr -  function that locates a character in a string
 *
 * @s: string
 * @c: character
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	char *f;

	f = strchr(s, c);
	if (*f != c)
	{
		return (NULL);
	}
	else
	{
		return (f);
	}
}
