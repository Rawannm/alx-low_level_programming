#include <stdio.h>
#include "lists.h"

/**
* print_list - to print elements of linked list
* @h: pointer at linked list
*
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		p++;
	}
	return (p);
}
