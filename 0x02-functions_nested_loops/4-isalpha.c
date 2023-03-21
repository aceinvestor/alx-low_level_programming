#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: the character to check
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


