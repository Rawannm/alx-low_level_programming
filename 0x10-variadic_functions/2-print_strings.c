#include "variadic_functions.h"
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	int j = n;
	char *c;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (j--)
		printf("%s%s", (c = va_arg(ap, char *)) ? c : "(nil)",
				j ? (separator ? separator : "") : "\n");
	va_end(ap);
}
