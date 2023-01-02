#include "lists.h"

/**
 * print_listint - print the elements of a linked list
 * @h: head of list
 *
 * Return: nmber of nodes on the list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t p = h;
	size_t c = 0;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		c += 1;
		p = p->next;
	}
	return (c);
}
