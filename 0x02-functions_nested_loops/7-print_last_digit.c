#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @x: x is an integer
 *
 * Return: 0
 */
int print_last_digit(int x)
{
	int n = x % 10;

	_putchar (n + '0');
	return (n);
}
