#include "main.h"
#include <string.h>

/**
 * *_memcpy -  function that copies memory area
 *
 * @dest: destination
 * @src: source
 * @n: memory
 *
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
