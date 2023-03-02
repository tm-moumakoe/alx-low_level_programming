#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @c: pointer to string
 * Return: c
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
		i++;
	}
	return (c);
}
