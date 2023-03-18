# include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 * all the letters except q and e
 *
 * Return: Always 0
 */

int main(void)
{
	int chr;

	for (chr = 'a' ; chr <= 'z' ; chr++)
	{
		if (chr == 'q')
		{
			continue;
		}
		putchar(chr);
	}
		putchar('\n');
	return (0);
}
