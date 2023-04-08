#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins to make
 * change for an amount of money
 *
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: 0 and 1
 */
int main(int argc, char *argv[])
{
	int cent = 0, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num > 0)
	{
		while (num >= 25)
		{
			num -= 25;
			cent += 1;
		}
		while (num >= 10)
		{
			num -= 10;
			cent += 1;
		}
		while (num >= 5)
		{
			num -= 5;
			cent += 1;
		}
		while (num >= 2)
		{
			num -= 2;
			cent += 1;
		}
		while (num >= 1)
		{
			num -= 1;
			cent += 1;
		}
		printf("%d\n", cent);
	}
	else
		printf("0\n");
	return (0);
}
