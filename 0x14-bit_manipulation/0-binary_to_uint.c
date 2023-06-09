#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointint to a string of 0 and 1 chars
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int  sum = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		else if (b[i] == '1')
		{
			sum = sum * 2 + 1;
		}
		else
		{
			sum *= 2;
		}
	}
	return (sum);
}
