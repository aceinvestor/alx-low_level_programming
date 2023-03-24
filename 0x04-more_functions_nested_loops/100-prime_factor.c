#include <stdio.h>

/**
 * main - program that finds and prints the largest
 * prime factor of number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n = 612852475143;
	long int x = 2;
	long int l = n;

	while (l != x)
	{
		if (l % x == 0)
		{
			l = l / x;
		}
		else
		{
			x++;
		}
	}
	printf("%li\n", l);
	return (0);
}
