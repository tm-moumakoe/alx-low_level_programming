#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to string to be searched.
 * @accept: pointer to bytes to be searched for in s.
 * Return: pointer to byte in s that matches one of the bytes in accept
 * or 0 if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*s == *(accept + i))
				return (s);
		}
		s++;
	}
	return ('\0');
}
