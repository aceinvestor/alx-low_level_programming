#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: argument count
 * @argv: array of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, bytes;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx ", ptr[i]);
	}
	printf("\n");
	return (0);
}

