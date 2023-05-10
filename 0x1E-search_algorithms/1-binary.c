#include "search_algos.h"

/**
 * binary_search - Function that searches a sorted array for a value
 * using binary search
 * @array: array of integers
 * @size: number of elements in the array
 * @value: value to search for
 * Return: value at the first index or -1
 */

int binary_search(int *array, size_t size, int value)
{

	size_t md, lt, rt;

	if (array == NULL)
		return (-1);

	for (lt = 0, rt = size - 1; rt >= lt;)
	{
		printf("Searching in array: ");
		for (md = lt; md < rt; md++)
			printf("%d, ", array[md]);
		printf("%d\n", array[md]);

		md = lt + (rt - lt) / 2;
		if (array[md] == value)
			return (md);
		if (array[md] > value)
			rt = md - 1;
		else
			lt = md + 1;
	}

	return (-1);
}
