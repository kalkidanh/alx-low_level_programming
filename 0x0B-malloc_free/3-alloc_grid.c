#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - print a 2D array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
	}
	return (array);
}
