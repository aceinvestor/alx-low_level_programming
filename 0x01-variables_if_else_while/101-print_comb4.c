#include <stdio.h>

/**
 * main -  program that prints  possible different combinations of three digits
 *
 * Return: Always 0
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = x + 1 ; y <= 9 ; y++)
		{
			for (z = y + 1 ; z <= 9 ; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (x == 7 && y == 8)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
			putchar('\n');
	return (0);
}

