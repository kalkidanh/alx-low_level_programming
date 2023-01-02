#include "lists.h"

/**
 * free_listint2 - free the list
 * @head: pointer to head of list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *c;
	listint_t **t = head;

	if (t != NULL)
	{
		while (head != NULL)
		{
			c = *head;
			free(c);
			*head = (*head)->next;
		}

		*t = NULL;
	}
}
