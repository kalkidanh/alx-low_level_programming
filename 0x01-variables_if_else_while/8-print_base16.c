#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
		if (number == '9')
		{
			number = 'a';
			for (; number <= 'f'; number++)
			{
				putchar(number);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
