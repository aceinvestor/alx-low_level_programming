#include "main.h"

/**
 * _sqrt_recursion_value - function that returns x
 *
 * @n: number
 * @x: number
 *
 * Return: 0
 */
int _sqrt_recursion_value(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion_value(n, x + 1));
	}
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: number
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_value(n, 0));
}
