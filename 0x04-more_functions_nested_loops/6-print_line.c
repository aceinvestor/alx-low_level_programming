#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n: n is a line
 *
 * Return: void
 */
void print_line(int n)
{
	int m;

	for (m = 0; m < n ; m++)
	{
		if (m > 0)
		{
			_putchar('_');
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
	}
}
