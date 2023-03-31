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
	int last;

	for (i = 0 ; n[i] != '\0' ; i++)
	{
		last = i - 1;
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			if (i == 0)
			{
				n[i] -= 32;
			}
			else if	(n[last] == ' ' || n[last] == '\t' || n[last] == '\n' ||
				n[last] == ',' || n[last] == ';' || n[last] == '.' || n[last] == '!' ||
				n[last] == '?' || n[last] == '"' || n[last] == '(' || n[last] == ')'
				|| n[last] == '{' || n[last] == '}')
			{
				n[i] -= 32;
			}
		}
	}
	return (n);
}
