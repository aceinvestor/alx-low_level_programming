#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that multiplies two positive numbers
 *
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul = 0, nnum1, nnum2, i;

	char *num1 = argv[1];
	char *num2 = argv[2];

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; num1[i] != '\0' ; i++)
	{
		if (!isdigit(num1[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i = 0; num2[i] != '\0'; i++)
	{
		if (!isdigit(num2[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	nnum1 = atoi(num1);
	nnum2 = atoi(num2);
	mul = (nnum1 * nnum2);
	printf("%d\n", mul);
	return (0);
}
