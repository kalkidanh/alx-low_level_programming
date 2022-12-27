#include "main.h"

/**
 * binary_to_uint - convert a bin to uint
 * @b: number to convert
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, len = 0, sum = 0, n = 1;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		len++;
		i++;
	}
	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);
		if (b[len - 1] == '1')
			sum += n;
		n *= 2;
		len--;
	}
	return (sum);
}
