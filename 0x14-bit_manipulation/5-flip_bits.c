#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: integer
 * @m: integer
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned long int count = 0;

	xor = n ^ m;
	while (xor)
	{
		count += (xor & 1);
		xor >>= 1;
	}
	return (count);
}
