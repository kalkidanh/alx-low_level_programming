#include "main.h"

/**
 * *_strcpy -copy a string
 * @dest: input character (pointer)
 * @src: input character
 *
 * Return: character that was copied
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
