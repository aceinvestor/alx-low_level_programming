#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int c = 0, x;

	while (c < 10)
	{
		x = 0;
		while (x <= 14)
		{
			if (x <= 9)
			{
				_putchar(x + '0');
			}
			else
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			x++;
		}
		c++;
		_putchar('\n');
	}
}
