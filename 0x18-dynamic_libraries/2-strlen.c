#include "main.h"

/**
 * _strlen - print length of string
 * @s: input parameter
 *
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	return (len);
}
