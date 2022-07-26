#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to allocated space in memory
 * @str: string to copy
 *
 * Return: a pointer or 0
 */
char *_strdup(char *str)
{
	char *d;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	d = malloc(sizeof(char) * (l + 1));

	if (d == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		d[i] = str[i];

	d[l] = '\0';

	return (d);
}
