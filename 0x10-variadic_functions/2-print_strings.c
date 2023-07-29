#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print string and new line
 * @separator :to print between strings
 * @n :number of strings
 * @...: variable numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *c;
	unsigned int i;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(string, char *);

		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(string);
}
