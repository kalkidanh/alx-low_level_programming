#include "main.h"

/**
 * _memset - fills memory with a constant bytes
 * @s: appointed memory area
 * @b: constant byte
 * @n: first bytes of memory area
 *
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
