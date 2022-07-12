#include "main.h"

/**
 * puts2 - prints all characters of a string
 * @str: input parameter
 *
 * Return: always 0
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
