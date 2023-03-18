#include <stdio.h>

/**
 *main - program that prints all single digit numbers of base 10
 *starting from 0,You are not allowed to use any variable of type char
 *
 * Return: Always 0
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
		putchar('\n');
	return (0);
}

