#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes
 * @dest: string to append to
 * @src: string to append
 * @n: max bytes to be used
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;
	for (; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
