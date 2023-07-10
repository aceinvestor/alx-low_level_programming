#include "main.h"
#include <string.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, len = 0, j;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
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
