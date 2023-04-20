#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: separator
 * @n:  number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *string;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char*);
		if (string == NULL)
		{
			string = "(nil)";
		}
		if (separator != NULL)
		{
			if (i == n - 1)
			{
				printf("%s", string);
			}
			else
			{
				printf("%s%s", string, separator);
			}
		}
		else
		{
			printf("%s", string);
		}
	}
	printf("\n");
	va_end(list);
}
