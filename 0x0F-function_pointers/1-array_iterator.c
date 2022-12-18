#include "function_pointers.h"

/**
 * array_iterator - iterate on each element of an array
 * @array: array to iterate
 * @size: array size
 * @action: iteration function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
