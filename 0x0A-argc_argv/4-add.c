#include <stdio.h>
#include <stlib.h>

/**
 * main - program that adds positive numbers
 *
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc > 1)
	{
		for (i = 0 ; i < argc ; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");

