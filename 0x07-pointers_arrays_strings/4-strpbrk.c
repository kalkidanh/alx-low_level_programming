#include "main.h"

/**
 * _strpbrk - locate first occurence
 * @s: string
 * @accept: bytes serched for
 *
 * Return:  pointer or 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
