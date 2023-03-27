#include "main.h"

/**
 * reset_to_98 - function that takes a pointer to an int as
 * parameter and updates the value it points to to 98
 *
 * @n: integer
 *
 * Return: 0
 */
void reset_to_98(int *n)
{
	int p;

	p = 402;
	n = &p;
	*n = 98;
}
