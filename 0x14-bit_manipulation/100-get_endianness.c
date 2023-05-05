#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	int x = 1;
	char *c;

	c = (char *) &x;

	if (*c == 1)
		return (1);
	else
		return (0);
}
