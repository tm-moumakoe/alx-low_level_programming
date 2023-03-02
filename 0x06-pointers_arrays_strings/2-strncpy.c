#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: string to copy to
 * @src: string to copy
 * @n: max bytes used
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
