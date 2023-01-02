#include "lists.h"

/**
 * get_nodeint_at_index - get the node of the list at index
 * @head: pointer to head of list
 * @index: index of node
 *
 * Return: node address
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *c = NULL;
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i <= index)
		{
			if (i == index)
			{
				c = head;
				break;
			}
			head = head->next;
			i++;
		}
		else
			return (NULL);
	}
	return (c);
}
