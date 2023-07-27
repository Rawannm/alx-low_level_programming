#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - to print the sum of arg
 * @n: the last arg in the func
 * @...: the rest of the arg
 *
 * Return :sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum, j = 0;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	for (j = 0; j < n; j++)
		sum += va_arg(ap, int);
		va_end(ap);
	return (sum);
}
