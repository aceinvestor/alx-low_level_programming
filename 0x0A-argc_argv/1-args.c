#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 *
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int argcc;

	(void)*argv;
	argcc = argc - 1;
	printf("%d\n", argcc);
	return (0);
}
