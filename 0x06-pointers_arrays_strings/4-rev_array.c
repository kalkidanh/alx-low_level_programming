#include "main.h"

/**
 * reverse_array - reverse the integer array
 * @a: input parameter
 * @n: number of integers
 *
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i > n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
