#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = x + 1 ; y <= 9 ; y++)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x == 8 && y == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
	return (0);
}
