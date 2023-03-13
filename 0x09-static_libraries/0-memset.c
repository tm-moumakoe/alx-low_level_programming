#include <stdio.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to array of characters.
 * @b: constant byte.
 * @n: number of bytes of memory to be filled.
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;
	return (s);
}
