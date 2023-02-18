#include <stdio.h>
/**
 * main - Prints 0 - f (hexadecimal) in lowercase, followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	int num = 48;

	while (num < 103)
	{
		if (num == 58)
			num = 97;
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
