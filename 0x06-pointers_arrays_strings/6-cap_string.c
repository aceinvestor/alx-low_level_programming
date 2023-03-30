#include "main.h"
#include <string.h>

/**
 * *cap_string -  function that capitalizes all words of a string
 *
 * @n: character
 *
 * Return: 0
 */
char *cap_string(char *n)
{
	int i;

	if (n[0] >= 'a' && n[0] <= 'z')
	{
		n[0] -= 32;
	}
	for (i = 1 ; n[i] != '\0' ; i++)
	{
		if (n[i] == ' ' || n[i] == '\t' || n[i] == '\n' || n[i] == ',' ||
			n[i] == ';' || n[i] == '.' || n[i] == '!' || n[i] == '?' || n[i] == '"' ||
			n[i] == '(' || n[i] == ')' || n[i] == '{' || n[i] == '}')
		{
			i++;
			if (n[i] >= 'a' && n[i] <= 'z')
			{
				n[i] -= 32;
			}
		}
	}
	return (n);
}
