#include "main.h"

/**
 * find_sqrt - find the square root of a number
 * @num: input parameter
 * @root: root
 *
 * Return: the square root
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}
