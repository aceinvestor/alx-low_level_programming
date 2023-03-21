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
	for (c = 'a' ; c <= 'z' ; c++)
	{
		return (1);
	}
	for (c = 'A' ; c <= 'Z' ; c++)
	{
		return (1);
	}
		return (0);
}


