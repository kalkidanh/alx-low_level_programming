#include "main.h"

/**
 * _memset - fill the first byte of memory
 * @s: pointer
 * @b: constant
 * @n: number
 *
 * Return: a string
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
