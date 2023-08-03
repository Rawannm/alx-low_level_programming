#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to the first node
 * @idx: index where the new node is added
 * @n: data to insert
 *
 * Return: pointer, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *w;
	listint_t *t = *head;

	n = malloc(sizeof(listint_t));
	if (!w || !head)
		return (NULL);

	w->n = n;
	w->next = NULL;

	if (idx == 0)
	{
		w->next = *head;
		*head = w;
		return (w);
	}

	for (i = 0; t && i < idx; i++)
	{
		if (i == idx - 1)
		{
			w->next = t->next;
			t->next = w;
			return (w);
		}
		else
			t = t->next;
	}

	return (NULL);
}
