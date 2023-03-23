#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * @n: backslash
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (m = 0 ; m < n ; m++)
	{
		int s;

		for (s = 0 ; s < m ; s++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
