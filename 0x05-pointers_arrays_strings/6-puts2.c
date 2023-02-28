#include "main.h"

/**
 * puts2 - prints only one character out of two starting with the first one
 * @str: input
 */

void puts2(char *str)
{
	int length = 0;
	char *c = str;
	int i;

	while (*c != '\0')
	{
		c++;
		length++;
	}
	for (i = 0; i < length; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}
