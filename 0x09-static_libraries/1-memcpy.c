#include "main.h"

/**
 *_memcpy - a function that copies memory area.
 *@dest: where memory is copied to.
 *@src: where memory is copied from.
 *@n: number of bytes.
 *Return: copied memory with n bytes changed.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
