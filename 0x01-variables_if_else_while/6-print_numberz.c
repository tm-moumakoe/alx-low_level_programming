#include <stdio.h>
/**
 * main - Prints 0 - 9 followed by a new line using putchar.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
