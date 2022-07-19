#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of a square matrix diagonally
 * @a: input parameter (array)
 * @size: size (diagonal)
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, j = 0, k = 0;

	for (i = 0; i < size; i++)
	{
		j += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		k += a[i];
		a -= size;
	}

	printf("%d, %d\n", j, k);
}
