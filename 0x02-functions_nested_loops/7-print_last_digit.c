#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: input parameter
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (i < 0)
	{
		i = -i;
	}
	_putchar(i + '0');
	return (i);
}
