#include "lists.h"

/**
 * add_nodeint_end - to add a node 
 * @head: pointer to the first element
 * @n: data to insert
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *w;
	listint_t *t = *head;

	w = malloc(sizeof(listint_t));
	if (!w)
		return (NULL);

	w->n = n;
	w->next = NULL;

	if (*head == NULL)
	{
		*head = w;
		return (w);
	}

	while (temp->next)
		t = t->next;

	t->next = w;

	return (w);
}
