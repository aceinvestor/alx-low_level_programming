#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output
 * @filename: name of file
 * @letters:  number of letters it should read and print
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, j;
	char *buffer;
	int fp;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);
	i = read(fp, buffer, letters);
	if (i == -1)
		return (0);
	j = write(STDOUT_FILENO, buffer, i);
	if (j == -1)
		return (0);

	free(buffer);
	close(fp);
	return (i);
}
