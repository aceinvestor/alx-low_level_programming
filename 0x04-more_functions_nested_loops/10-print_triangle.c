#include "main.h"

/**
 * print_triangle -  function that prints a triangle
 *
 * @size: integer
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	int m, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (m = 0 ; m < size ; m++)
	{
		for (n = size - 1 ; n > m ; n--)
		{
			_putchar(' ');
		}
		for (n = 0 ; n <= m ; n++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
