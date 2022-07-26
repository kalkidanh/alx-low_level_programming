#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of characters
 * @size: size of array
 * @c: character
 *
 * Return: a pointer or 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
