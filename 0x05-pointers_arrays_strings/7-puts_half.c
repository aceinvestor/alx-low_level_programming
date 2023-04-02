#include "main.h"
#include <string.h>

/**
 * puts_half -  function that prints half of a string, followed by a new line
 *
 * @str: string
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int i;
	int j = strlen(str);
	int k = j / 2;

	if (j % 2 == 1)
	{
		k++;
	}
	for (i = k ; i < j ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
