#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that multiplies two numbers
 *
 * @argc: number of argument
 * @argv: number of array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int multiply = 1;

	if (argc == 3)
	{
		for (i = 1 ; i < argc ; i++)
		{
			multiply *= atoi(argv[i]);
		}
		printf("%d\n", multiply);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
