#include "main.h"

/**
 * _strchr - returns pointer to first occurrence of char c.
 * @s: pointer to string to be evaluated.
 * @c: char to be checked.
 * Return: pointer to first occurrence of c, otherwise NULL.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; *(s + i) >= '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (0);
}
