#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: integer
 * @index: index
 * Return: value of the bit at index index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
