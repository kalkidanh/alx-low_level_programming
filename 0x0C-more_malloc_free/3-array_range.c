#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of integers incrementally
 * @min: minimum value of array
 * @max: maximum value of array
 *
 * Return: NULL or a pointer
 */
int *array_range(int min, int max)
{
	int *a, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	a = malloc(sizeof(int) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = min++;

	return (a);
}
