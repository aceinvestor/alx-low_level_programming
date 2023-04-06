#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: number
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		int x = sqrt(n);

		if (x * x == n)
		{
			return (x);
		}
		else if (x * x != n)
		{
			return (-1);
		}
		else
		{
			return (_sqrt_recursion(n / (x * x)));
		}
	}
}
