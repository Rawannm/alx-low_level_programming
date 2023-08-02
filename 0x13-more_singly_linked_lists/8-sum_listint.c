#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data 
 * @head: first node
 *
 * Return: result of sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *t = head;

	while (t)
	{
		sum += t->n;
		t = t->next;
	}

	return (sum);
}
