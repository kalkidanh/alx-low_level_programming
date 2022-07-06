#include "main.h"
/**
 *print_last_digit -> prints the last digit
 *@n: target
 *Return: The last digit
 */
int print_last_digit(int n)
{
	int x;

	x= n % 10;

	if (x < 0)
	{
		x = -x;
	}
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
