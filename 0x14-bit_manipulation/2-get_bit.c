#include "main.h"

/**
 * get_bit - returns the value of a bit at an index
 * @n: input number
 * @index: index of the bit
 *
 * Return: value of bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num = n >> index;

	if (index <= (sizeof(n) * 8 - 1))
		return (num & 1);
	return (-1);
}
