#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr -  function that concatenates all the arguments of your program
 *
 * @ac: integer
 * @av: pointer of character pointer
 *
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int len1 = 0;
	int i, j;
	int len2 = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len1++;
		}
		len1++;
	}
	str = malloc(len1 + 1 * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[len2] = av[i][j];
			len2++;
		}
		str[len2] = '\n';
		len2++;
	}
	return (str);
}
