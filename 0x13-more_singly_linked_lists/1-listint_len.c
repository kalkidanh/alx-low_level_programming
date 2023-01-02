#include "lists.h"

/**
 * listint_len - return number of eleemnts of a list
 * @h: head of the list
 *
 * Return: nmber of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
