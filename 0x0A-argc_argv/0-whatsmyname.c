#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 *
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}