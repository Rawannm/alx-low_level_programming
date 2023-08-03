#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the nodes
 * @head: A pointer to the head to check.
 *
 * Return: 0, or the number of unique nodes
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tort, *h;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tort = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (tort == h)
		{
			tort = head;
			while (tort != h)
			{
				nodes++;
				tort = tort->next;
				h = h->next;
			}

			tort = tort->next;
			while (tort != h)
			{
				nodes++;
				tort = tort->next;
			}

			return (nodes);
		}

		tort = tort->next;
		h= (h->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints list safely.
 * @head: A pointer to the head of list.
 *
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
