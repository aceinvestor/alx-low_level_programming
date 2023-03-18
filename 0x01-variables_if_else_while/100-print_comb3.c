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

	for (x = 1 ; x <= 89 ; x++)
	{
		putchar('0' + x / 10);
		for (y = 1 ; y <= 89 ; y++)
		{
			putchar('0' + y % 10);
		}
		putchar(',');
		putchar(' ');
	}
		putchar('\n');
	return (0);
}
