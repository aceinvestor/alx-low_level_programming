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
	int i, j;
	char s1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0 ; n[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 52 ; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
				break;
			}
		}
	}
	return (n);
}
