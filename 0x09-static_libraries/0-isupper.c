#include "main.h"

/**
 * _isupper - uppercase letters.
 * @c: char to check.
 * Return: 1 if c is upper case and 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
