#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: pointer to string where src will be "pasted".
 * @src: pointer to string to be copied.
 * @n: max number of bytes to be copied.
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
