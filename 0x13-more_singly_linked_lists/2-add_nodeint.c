#include "lists.h"

/**
 * add_nodeint - to add a new node at the beginning
 * @head: pointer
 * @n: data to insert in new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *w;

	w = malloc(sizeof(listint_t));
	if (!w)
		return (NULL);

	w->n = n;
	w->next = *head;
	*head = new;

	return (w);
}
