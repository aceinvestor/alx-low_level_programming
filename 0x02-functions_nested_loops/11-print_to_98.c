#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  function that prints all natural numbers from n to 98
 * followed by a new line
 *
 * @n: integer
 *
 * Return: void
 */

void print_to_98(int n)
{
	for (n = 0 ; n <= 98 ; n++)
	{
		printf("%d, ", n);
	}
	for (n = 0 ; n > 98 ; n--)
	{
		printf("%d, ", n);
	}
}
