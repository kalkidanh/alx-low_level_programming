#include "main.h"
#include <stdio.h>

/**
 * main - prints the largest prime factor of number
 *
 * Return: always 0
 */
int main(void)
{
	long i, largest = 0, n = 612852475143;

	for (i = 2; n > 1; i++)
	{
		while (n % i == 0)
		{
			n /= i;
			largest = i;
		}
	}
	printf("%ld\n", largest);

	return (0);
}
