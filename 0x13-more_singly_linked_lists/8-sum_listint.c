#include "lists.h"

/**
 * sum_listint - sum up the data of the list
 * @head: head of list
 *
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	listint_t *c = head;
	size_t s = 0;

	while (c != NULL)
	{
		s += c->n;
		c = c->next;
	}
	return (s);
}
