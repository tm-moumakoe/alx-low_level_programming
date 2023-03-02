#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to appen to
 * @src: string to append
 * Return: appended dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;
	for (; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
