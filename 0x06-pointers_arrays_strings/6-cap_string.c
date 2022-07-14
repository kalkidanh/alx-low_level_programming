#include "main.h"

/**
 * cap_string - change the first character to capital
 * @str: string to be changed
 *
 * Return: a string
 */
char *cap_string(char *str)
{
	int i = 0;
	char spt[] = " \t\n,;.!\"(){}";

	while (s[i] != '\0')
	{
		while (spt[j] != '\0')
		{
			if (s[i] == spt[j] && (s[i] >= 'a' && s[i] <= 'z'))
				j++;
		}
		i++;
	}
	return (s);
}
