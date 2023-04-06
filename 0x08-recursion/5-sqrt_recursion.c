#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: number
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		int x = n / 2;

		while (x * x > n)
		{
			x = (x + n / x) / 2;
		}
		if (x * x == n)
		{
			return (x);
		}
		else
		{
			return (-1);
		}
	}
	return (0);
}
