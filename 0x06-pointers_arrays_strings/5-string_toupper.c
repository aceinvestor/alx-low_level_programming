#include "main.h"
#include <string.h>

/**
 * *string_toupper -  function that changes all lowercase
 *  letters of a string to uppercase
 *
 *  @n: letter
 *
 *  Return: 0
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0 ; n[i] != '\0' ; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 'a' + 'A';
		}
	}
	return (n);
}
