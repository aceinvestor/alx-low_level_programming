#include <stdio.h>

/**
 * main - program that finds and prints the largest
 * prime factor of number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long n = 612852475143;
	long x = 2;
	long largest_factor = 0;

	while (n != 1)
	{
		if (n % x == 0)
		{
			largest_factor = x;
			n /= x;
		}
		else
		{
			x++;
		}
	}
	printf("largest factor of 612852475143 is: %ld\n", largest_factor);
	return (0);
}
