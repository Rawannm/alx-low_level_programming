#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - the summtion of two integers
 * @a: The first number
 * @b: The second number
 *
 * Return: summtion of  a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - the subtraction of two integers
 * @a: The first number
 * @b: The second number
 *
 * Return: The subtraction of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - the multiplcation of two integers
 * @a: The first number
 * @b: The second number
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - the division of two integers
 * @a: The first number
 * @b: The second number
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - the mod of two integers
 * @a: The first number
 * @b: The second number
 *
 * Return: The remainder of division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}


