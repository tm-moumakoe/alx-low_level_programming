#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest.
 * @dest: pointer to string to copy to.
 * @src: pointer to string to copy from.
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(src + i) != '\0')
		i++;
	for ( ; j < i ; j++)
		dest[j] = src[j];
	dest[i] = '\0';
	return (dest);
}
