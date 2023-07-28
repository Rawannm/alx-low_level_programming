#include <stdlib.h>
#include "lists.h"

/**
* list_len - number of elements at linked list
*@h: pointer at linked list
*
*Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}

