#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: seperator
 * @n: number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (n == 0)
	{
		return;
	}
	if (separator == NULL)
	{
		return;
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", va_arg(list, int));
		}
		else
		{
			printf("%d%s", va_arg(list, int), separator);
		}
	}
	printf("\n");
	va_end(list);
}
