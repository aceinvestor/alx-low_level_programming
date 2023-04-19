#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum of 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_sub - remainder of division of 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
