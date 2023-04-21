#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0, p = 0;
	char *s;
	va_list list;

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				p = 1;
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				p = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				p = 1;
				break;
			case 's':
				s = va_arg(list, char*);
				if (s == NULL)
				{
					s = ("(nil)");
				}
				printf("%s", s);
				p = 1;
				break;
			default:
				break;
		} i++;
		if (format[i] && p)
			printf(", ");
		p = 0;
	}
	printf("\n");
	va_end(list);
}
