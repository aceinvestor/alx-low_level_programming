#include "main.h"
#include <string.h>

/**
 * puts2 -  function that prints every other character of a string, starting
 *  with the first character, followed by a new line
 *
 * @str: string
 *
 *  Return: void
 */
void puts2(char *str)
{
	int i;
	int j = strlen(str);

	for (i = 0 ; i < j ; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
