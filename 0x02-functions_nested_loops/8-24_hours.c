#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer,
 *  starting from 00:00 to 23:59
 *
 *  Return: 0
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			for (c = 0 ; c <= 9 ; c++)
			{
				for (d = 0 ; d <= 9 ; d++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
				}
			}
		}
	}
}