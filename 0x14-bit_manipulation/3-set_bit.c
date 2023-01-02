#include "main.h"

/**
 * set_bit - sets the value of a bit at an index
 * @n: input number
 * @index: index of bit
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1 << index;

	if (index <= (sizeof(n) * 8 - 1))
	{
		*n |= num;
		return (1);
	}
	return (-1);
}
