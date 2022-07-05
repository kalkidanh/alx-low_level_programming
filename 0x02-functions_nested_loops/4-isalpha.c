#include "main.h"
/**
 * _isalpha - checks for alphabets
 *
 *@c: to be verified
 * Return: return 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
