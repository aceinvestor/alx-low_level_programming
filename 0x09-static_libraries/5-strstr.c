#include "main.h"
#include <string.h>

/**
 * *_strstr - function that locates a substring
 *
 * @haystack: string
 * @needle: string
 *
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *f = strstr(haystack, needle);

	if (f == NULL)
	{
		return (NULL);
	}
	else
	{
		return (f);
	}
}

