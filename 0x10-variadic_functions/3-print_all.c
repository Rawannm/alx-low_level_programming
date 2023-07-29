#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print all strings
 * @format :list of arg
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *c, *separate = "";
	va_list p;

	va_start(p, format);
	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", separate, va_arg(p, int));
					break;
				case 'i':
					printf("%s%d", separate, va_arg(p, int));
					break;
				case 'f':
					printf("%s%f", separate, va_arg(p, double));
					break;
				case 's':
					c = va_arg(p, char *);
					if (!c)
						c = "(nil)";
					printf("%s%s", separate, c);
					break;
				default:
					j++;
					continue;
			}
			separate = ", ";
			j++;
		}
	}

	printf("\n");
	va_end(p);
}

