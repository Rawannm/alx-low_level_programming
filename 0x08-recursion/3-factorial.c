#include "main.h"

/**
* factorial - the factorial
* @n :number to printf
*
* Return: factorial
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
