#include "main.h"

/**
 * _puts -print string
 * @str: input parameter
 *
 * Return: always 0
 */
void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
