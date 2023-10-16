#include "main.h"

/**
 * set_bit - prog sets the value
 * @n: number
 * @index: index to set bit
 *
 * Return: 1, or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setb;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setb = 1 << index;
	*n = *n | setb;
	return (1);
}
