#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of the list
 * @head: pointer to head of list
 * @n: number contained in node
 *
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *c = *head;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
		return (NULL);
	if (c != NULL)
	{
		while (c->next != NULL)
			c = c->next;

		c->next = new;
	}
	else
		*head = new;
	return (new);
}
