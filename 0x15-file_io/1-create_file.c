#include "main.h"
#include <string.h>

/**
 * create_file -  function that creates a file
 * @filename: name of file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp, len = 0, j;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);
	if (text_content == NULL)
	{
		text_content = "";
	}
	else
		len = strlen(text_content);
	j = write(fp, text_content, len);
	if (j == -1)
		return (-1);
	close(fp);
	return (1);
}
