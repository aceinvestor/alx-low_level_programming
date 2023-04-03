#include "main.h"
#include <string.h>
/**
 * *_memset - function that fills memory with a constant byte
 *
 * @s: pointer
 * @b: constant
 * @n: memory
 *
 * Return: 0;
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
