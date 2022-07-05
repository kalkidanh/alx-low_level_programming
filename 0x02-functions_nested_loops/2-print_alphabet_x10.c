#include "main.h"
/**
 * print_alphabet_x10 - prints lower case ten times
 *
 * Return: no return
 */
void print_alphabet_x10(void)
{
	int c;
	int l;

	for (l = 0; l < 10; l++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
