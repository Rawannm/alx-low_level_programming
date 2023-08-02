#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to the first element
 *
 * Return: the data deleted, or 0 
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (number);
}
