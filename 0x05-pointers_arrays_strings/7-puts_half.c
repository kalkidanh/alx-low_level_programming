#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input parameter
 *
 * Return: always 0
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
		len++;

	if (len % 2 != 0)
		i = (len + 1) / 2;
	else
		i = len / 2;
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
