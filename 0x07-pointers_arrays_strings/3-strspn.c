#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string
 * @accept: string
 *
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int f;

	f = strspn(s, accept);
	if (f == 0)
	{
		return (0);
	}
	return (f);
}
