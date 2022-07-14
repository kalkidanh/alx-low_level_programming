#include "main.h"

/**
 * leet - encodes a string
 * @str: string tobe encoded
 *
 * Return: string
 */
char *leet(char *str)
{
	int i1 = 0, i2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++i1])
	{
		for (i2 = 0; i2 <= 7; i2++)
		{
			if (str[i1] == leet[i2] || str[i1] - 32 == leet[i2])
				str[i1] = i2 + '0';
		}
	}
	return (str);
}
