#include <stdio.h>

/**
 * _memcpy - copies memory area to another memory area.
 * @dest: pointer to destination of copied memory area.
 * @src: memory area to be copied.
 * @n: number of bytes to be copied.
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
