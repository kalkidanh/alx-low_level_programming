#include "main.h"

/**
 * rev_string - reverses the string
 * @s: input parameter
 *
 * Return: always 0
 */
void rev_string(char *s)
{
	int i = 0, len = 0;
	char str;

	while (s[len] != '\0')
		len++;
	while (i < len--)
	{
		str = s[i];
		s[i++] = s[len];
		s[len] = str;
	}
}
