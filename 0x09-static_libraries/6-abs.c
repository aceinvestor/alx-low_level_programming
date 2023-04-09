#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @x: x is an integer
 *
 * Return: 0
 */
int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else if (x == 0)
	{
		return (x);
	}
	else
	{
		return (-x);
	}
	return (0);
}

