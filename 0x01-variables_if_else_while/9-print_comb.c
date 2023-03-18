#include <stdio.h>

/**
 * main - program that prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int x = 0;

	if (x <= '8')
	{
		putchar(x);
		putchar(',');
	}
	else if (x == '9')
	{
		putchar(x);
	}
		putchar('\n');
	return (0);
}

