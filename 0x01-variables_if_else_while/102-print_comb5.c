#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int number1, number2;

	for (number1 = 0; number1 <= 98; number1++)
	{
		for (number2 = number1 + 1; number2 <= 99; number2++)
		{
			putchar((number1 / 10) + '0');
			putchar((number1 % 10) + '0');
			putchar(32);
			putchar((number2 / 10) + '0');
			putchar((number2 % 10) + '0');
			if (number1 / 10 != 9 || number1 % 10 != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
