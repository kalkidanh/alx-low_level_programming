#include "lists.h"

/**
 * pop_listint - delete the head of the linked list
 * @head: head of list
 *
 * Return: deleted node data
 */

int pop_listint(listint_t *head)
{
	listint_t *p;
	int c;

	if (*head == NULL)
		return (0);

	p = *head;
	c = p->n;
	free(p);

	*head = (*head)->next;
	return (c);
}
