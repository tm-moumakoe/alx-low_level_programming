#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to string to be searched.
 * @accept: pointer to string whose bytes are searched for in s.
 * Return: number of bytes in initial segment of s which consists only
 * of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; *accept; i++)
		{
			if (*s == *(accept + i))
			{
				n++;
				break;
			}
			else if (*(accept + i + 1) == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
