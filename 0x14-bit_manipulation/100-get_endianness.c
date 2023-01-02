#include "main.h"

/**
 * get_endianness - checks if endian is big or small
 *
 * Return: 1 or 0
 */

int get_endiannes(void)
{
	unsigned int t = 1;
	char *endian = (char *)&t;

	if (*endian)
		return (1);
	return (0);
}
