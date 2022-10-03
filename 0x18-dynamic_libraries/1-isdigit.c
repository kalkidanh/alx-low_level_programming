#include "main.h"
/**
 * _isdigit - verifies if a character is a digit
 * @c: verified character
 * Return: returns 1 or 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

	return (0);
}
