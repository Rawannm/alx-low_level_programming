#include "main.h"

/**
 * get_endianness - prog checks
 *
 * Return: 0 , 1
 */
int get_endianness(void)
{
	int i;
	char *b;

	i = 1;
	b = (char *)&i;
	return (*b);
}
