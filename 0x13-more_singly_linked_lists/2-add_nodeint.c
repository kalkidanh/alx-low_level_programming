#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of the listint_t list
 * @head: pointer to the head of the list
 * @n: number contained in the node
 * Return: NULL or position of element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
