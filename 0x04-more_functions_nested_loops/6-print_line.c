#include "main.h"

/**
 * print_line - draw a straight line
 * @n: the number of times
 * Return: always 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
