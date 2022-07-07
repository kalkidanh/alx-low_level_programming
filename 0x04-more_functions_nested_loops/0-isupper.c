#include "main.h"4
/**
 * _isupper - verifies upper or lower case
 * @c: character
 * Return: 1 or 0
 */

int _ isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
