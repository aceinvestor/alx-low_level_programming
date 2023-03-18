#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 1 ; x <= 89 ; x++)
	{
		putchar('0' + x / 10);
		putchar('0' + x % 10);
		putchar(',');
		putchar(' ');
	}
		putchar('\n');
	return (0);
}
