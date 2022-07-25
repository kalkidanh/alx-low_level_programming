#include "main.h"

/**
 * _pow_recursion - calculate x to the power of y
 * @x: number to raise
 * @y: power of
 *
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
