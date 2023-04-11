#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 *
 * @str: string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	int x = strlen(str), i;
	char *st;

	if (str == NULL)
	{
		return (NULL);
	}
	st = (char *) malloc(x * sizeof(char));
	if (st == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < x; i++)
	{
		st[i] = str[i];
	}
	return (st);
	free(st);
}
