#include "main.h"
#include <string.h>

/**
 * *_strncat - function that concatenates two strings
 *
 * @dest: string
 * @src: string
 *
 * @n: space
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
