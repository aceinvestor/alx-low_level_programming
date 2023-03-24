#include "main.h"
#include <limits.h>

/**
 * print_number -  function that prints an integer
 *
 * @n: integer
 *
 * Return: Always 0
 */
void print_number(int n)
{
	int rev;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n == INT_MIN)
	{
		print_number(n / 10);
		_putchar('8');
	}
	if (n < 10)
	{
		_putchar('-');
		n = -n;
	}
	rev = 0;

	while (n > 0)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	while (rev > 0)
	{
		_putchar((rev % 10) + '0');
		rev /= 10;
	}
}
