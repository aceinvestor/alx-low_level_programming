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

	for (m = 0 ; m < n ; m++)
	{
		if (n < 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
