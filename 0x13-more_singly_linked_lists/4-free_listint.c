#include "lists.h"

/**
 * free_listint - free the list
 * @head: head of list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
