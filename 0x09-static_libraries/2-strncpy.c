#include "main.h"
#include <string.h>

/**
 * *_strncpy -  function that copies a string
 *
 * @dest: string
 * @src: string
 * @n: space
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

