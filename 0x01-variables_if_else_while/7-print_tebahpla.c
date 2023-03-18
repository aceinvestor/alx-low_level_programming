#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 'a' ; x <= 'z' ; x--)
	{
		putchar(x);
	}
		putchar('\n');
	return (0);
}
