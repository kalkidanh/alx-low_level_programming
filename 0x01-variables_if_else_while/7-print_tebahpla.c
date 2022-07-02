#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
