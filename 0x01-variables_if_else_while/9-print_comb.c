#include <stdio.h>

/**
 * main - program that prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = '0' ; x <= '9' ; x++)
	{
		putchar(x);
		if (x == '9')
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
		putchar('\n');
	return (0);
}

