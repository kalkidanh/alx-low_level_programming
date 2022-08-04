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
	unsigned int i, sum = 0;

	va_start(lo, n);

	for (i = 0; i < n; i++)
		sum += va_arg(lo, int);

	va_end(lo);

	return (sum);
}
