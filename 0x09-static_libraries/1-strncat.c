#include "main.h"

/**
 * _strncat - concatenate two strings using at most n bytes from src.
 * @dest: pointer to string to append to.
 * @src: pointer to string to be appended.
 * @n: max number of bytes to append.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (j < n && *(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
