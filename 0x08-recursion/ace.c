#include <stdio.h>
#include <unistd.h>

int print_char(char c)
{
	write(1, &c, 1);
}
void print_all_letters(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		print_char(c);
		print_all_letters(c + 1);
	}
}
int main(void)
{
	print_all_letters('A');
	printf("\n");
	return (0);
}
