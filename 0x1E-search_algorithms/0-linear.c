#include "search_algos.h"

/**
 * linear_search - Function that searches a sorted array for a value
 * @array: An array of integers
 * @size: number of elements in the array
 * @value: Value to search for
 * Return: The first index where value is located or -1 if NULL
 */


int linear_search(int *array, size_t size, int value)
{
	size_t d;

	if (array == NULL)
		return (-1);
	for (d = 0; d < size; d++)
	{
		printf("Value checked array[%ld] = [%d]\n", d, array[d]);
		if (array[d] == value)
			return (d);
	}
	return (-1);
}
