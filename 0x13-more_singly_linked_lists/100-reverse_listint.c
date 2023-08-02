#include "lists.h"

/**
 * reverse_listint - to reverse
 * @head: pointer
 *
 * Return: pointer to first node 
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previos = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previos;
		previos = *head;
		*head = next;
	}

	*head = previos;

	return (*head);
}
