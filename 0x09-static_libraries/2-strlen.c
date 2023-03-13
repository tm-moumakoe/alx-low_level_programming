#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s: pointer to the string whose length we want to return.
 * Return: length.
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
