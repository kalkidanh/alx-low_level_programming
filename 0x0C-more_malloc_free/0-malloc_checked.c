#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - checks memory allocation
 * @b: number of bytes
 *
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
