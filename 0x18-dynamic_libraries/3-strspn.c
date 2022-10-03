#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: input string
 * @accept: input character to locate to string s
 *
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, count = 0;

	while (s[i])
	{
		if (s[i] == ',' || s[i] == ' ')
			break;
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
				count++;
			j++;
		}
		i++;
	}
	return (count);
}
