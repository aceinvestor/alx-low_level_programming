#include "main.h"

/**
 * _islower -  function that checks for lowercase character
 *
 * @c: the character to check
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar(c + '0');
		return (1);
	}
	else
	{
		return (0);
	}
}


