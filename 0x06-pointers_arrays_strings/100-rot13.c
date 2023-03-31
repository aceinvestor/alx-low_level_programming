#include "main.h"

/**
 * *rot13 -  function that encodes a string using rot13
 *
 * @n: string
 *
 * Return: 0
 */
char *rot13(char *n)
{
	int i;

	for (i = 0 ; n[i] != '\0' ; i++)
	{
		if ((n[i] >= 'a' && n[i] <= 'z') || (n[i] >= 'A' && n[i] <= 'Z'))
		{
			if (n[i] >= 'a')
			{
				n[i] = 'a' + (n[i] - 'a' + 13) % 26;
			}
			else
			{
				n[i] = 'A' + (n[i] - 'A' + 13) % 26;
			}
		}
	}
	return (n);
}
