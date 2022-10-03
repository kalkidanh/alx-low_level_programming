#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings but add inputted no of bytes
 * @dest: string to be appended
 * @src: string to be completed
 * @n: integer parameter
 * Return: new string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
