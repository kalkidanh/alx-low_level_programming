#include "main.h"

/**
 * clear_bit - set the bit position to 0
 * @n: number to use
 * @index: position to clear
 *
 * Return: 1 0r -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
