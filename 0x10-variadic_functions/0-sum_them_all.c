#include "variadic_functions.h"
#include <stdarg.h>

/**
 * *sum_them_all - sum of all parameters
 * @n: number of parameters
 *
 * Return: 0 or NULL or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list lo;
	int sum = 0;
	unsigned int i;

	va_start(lo, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(lo, int);
	}

	va_end(lo);
	return (sum);
}
