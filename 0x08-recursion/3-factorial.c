#include "main.h"

/**
 * factorial - factorial a given number
 * @n: number
 *
 * Return: n! or 0
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	result *= factorial(n - 1);
	return (result);
}
