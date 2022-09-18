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
	va_list list;
	int sum = 0;
	unsigned int x;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (x = 0; x < n; x++)
		sum += va_arg(list, int);
	va_end(list);

	return (sum);
}
