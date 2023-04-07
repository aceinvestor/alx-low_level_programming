#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 *
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	(void) argc;
	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
