#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer to the first node
 *
 * Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int dif;
	listint_t *t;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}

