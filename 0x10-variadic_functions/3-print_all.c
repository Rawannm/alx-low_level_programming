#include "variadic_functions.h"
/**
 *  print_all - print all strings
 *  @format :list of arg
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *c, *separate = "";
	va_list ap;

	va_start(ap, format);
	if (format)
	{
		while (format[j])
		{
			switch (format[j])
				case 'c':
					printf("%s%c", separate, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", separate, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", separate, va_arg(ap, double));
					break;
				case 's':
					c = va_arg(ap, char *);
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
	va_end(ap);
}

