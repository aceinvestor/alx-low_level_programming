#include "main.h"
#include <string.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int a = strlen(b);
	unsigned int sum = 0;
	int i;

	if (b == NULL)
		return (sum);
	for (i = 0; i < a; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		else if (b[i] != '1')
		{
			sum *= 2;
		}
		else
		{
			sum = sum * 2 + 1;
		}
	}
	return (sum);
}
