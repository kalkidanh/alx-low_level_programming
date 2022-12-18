#include "function_pointers.h"

/**
 * int_index - search for integer
 * @array: array of elements
 * @size: size of array
 * @cmp: compare values
 *
 * Return: a pointer to the first element or -1
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
