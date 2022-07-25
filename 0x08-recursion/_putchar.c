#include <unistd.h>

/**
 * _putchar - writes to stdout
 * @c: printed character
 *
 * Return: 1 or minus 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
