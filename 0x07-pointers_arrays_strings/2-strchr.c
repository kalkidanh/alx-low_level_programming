#include "main.h"

/**
 * _strchr - character in a string
 * @s: string location
 * @c: input parameter
 *
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
