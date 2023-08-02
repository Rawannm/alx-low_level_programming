#include "main.h"
int actual_sqrt_recursion(int a, int j);
/**
* _sqrt_recursion - the natural square root
* @n :the number
*
* Return: the result
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
* actual_sqrt_recursion - to find the natural
* @a :the number
* @j :the iterator
*
* Return: the result
*/
int actual_sqrt_recursion(int a, int j)
{
	if (j * j > a)
		return (-1);
	if (j * j == a)
		return (j);
	return (actual_sqrt_recursion(a, j + 1));
}
