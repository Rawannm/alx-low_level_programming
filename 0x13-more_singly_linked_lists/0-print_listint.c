#include "lists.h"

/**
 * print_listint - to prints all the elements 
 * @h: linked list of type listint_t
 *
 * Return: number
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
