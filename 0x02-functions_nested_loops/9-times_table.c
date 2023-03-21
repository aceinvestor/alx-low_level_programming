#include "main.h"

/**
 * times_table -  function that prints the 9 times table, starting with 0
 *
 * Return: 0
 */
void times_table(void)
{
	int x;
	int y;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0; y <= 9 ; y++)
		{
			_putchar(x + '0');
			_putchar(',');
			_putchar(y + '0');
			_putchar(',');
		}
	}

}
