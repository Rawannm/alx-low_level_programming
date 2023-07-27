#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - print numbers of arg are separated with string
 * @separator :to print between each arg
 * @n :arg to be separated
 * @... :arg to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int j = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (j--)
	{
		printf("%d%s", va_arg(ap, int), j ? (separator ? separator : "") : "\n");
	}
	va_end(ap);
}
