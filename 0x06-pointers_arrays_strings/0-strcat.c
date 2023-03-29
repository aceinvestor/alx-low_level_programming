#include "main.h"
#include <string.h>

/**
 * *_strcat -  appends the src string to the dest string
 *
 * @dest: string
 * @src: string
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
