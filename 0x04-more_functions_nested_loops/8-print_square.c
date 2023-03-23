#include "main.h"

/**
 * print_square - function that prints a square
 *
 * @size: integer
 *
 * Return: 0
 */
void print_square(int size)
{
	int n, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (m = 0 ; m < size ; m++)
	{
		for (n = 0 ; n < size ; n++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
