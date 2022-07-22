#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two integers and print
 * @argc: number of arguments
 * @argv: name of array
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}
