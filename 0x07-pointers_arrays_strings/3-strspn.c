#include "main.h"

/**
 * _strspn - length of prefix
 * @s: string
 * @accept: input parameter
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int p = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				p++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (p);
		}
		s++;
	}
	return (p);
}
