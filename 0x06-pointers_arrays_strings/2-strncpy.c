#include "main.h"
#include <string.h>

/**
 * _strncpy -copy the string
 * @dest: input parameter (pointer)
 * @src: input source characters
 * @n: number of bytes
 *
 * Return: strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
