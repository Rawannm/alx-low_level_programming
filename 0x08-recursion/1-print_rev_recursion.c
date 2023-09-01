#include "main.h"
/**
 * _print_rev_recursion - function reverses
 * @s: input to be rev
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
