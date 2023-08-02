#include "main.h"
int _strlen_recursion(char *r);
int check_pal(char *c, int j, int length);
/**
* is_palindrome - if string is palindrome
* @s :the string
*
* Return: 1 or 0
*/
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
* _strlen_recursion - the length of string
* @r :the string
*
* Return: length of string
*/
int _strlen_recursion(char *r)
{
	if (*r == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
* check_pal - to check
* @c :the string
* @j :the iterator
* @length : len of string
*
* Return: 1 or 0
*/
int check_pal(char *c, int j, int length)
{
	if (*(c + j) != *(c + length - 1)
		return (0);
	if (j >= length)
		return (1);
	return (check_pal(c, j + 1, length - 1));
}
