#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 *
 * @c: c is a character
 * Return: 0 or 1
 */
int _isupper(int c)
{
	int x;

	for (x = 'A' ; x <= 'Z' ; x++)
	{
		if (c == x)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
