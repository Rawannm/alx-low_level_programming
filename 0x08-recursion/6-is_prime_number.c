#include "main.h"
int actual_prime(int a, int j);
/**
* is_prime_number - if it's prime num or not
* @n :number
*
* Return: 1 or 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
* actual_prime - to calculate
* @a :the number
* @j :the iterator
*
* Return: 1 or 0
*/
int actual_prime(int a, int j)
{
	if (j == 1)
		return (1);
	if (a % j == 0 && j > 0)
		return (0);
	return (actual_prime(a, j - 1));
}
