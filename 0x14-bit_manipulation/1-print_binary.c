#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	for (i = 31; i >= 0; i--)
	{
		_putchar(((n >> i) & 1) ? '1' : '0');
	}
}
