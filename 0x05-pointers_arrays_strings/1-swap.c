#include "main.h"

/**
 * swap_int - switch value
 * @a: input parameter
 * @b: input parameter
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
