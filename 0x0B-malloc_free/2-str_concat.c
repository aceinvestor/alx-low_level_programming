#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len1;
	int len2;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	str = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		str[i + j] = s2[j];
	}
	return (str);
}
