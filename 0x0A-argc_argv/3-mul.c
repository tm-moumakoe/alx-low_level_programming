#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
        int i = 0, d = 0, n = 0, length = 0, f = 0, digit = 0;

        while (s[length] != '\0')
                length++;
        while (i < length && f == 0)
        {
                if (s[i] == '-')
                        ++d;

                if (s[i] >= '0' && s[i] <= '9')
                {
                        digit = s[i] - '0';
                        if (d % 2)
                                digit = -digit;
                        n = n * 10 + digit;
                        f = 1;
                        if (s[i + 1] < '0' || s[i + 1] > '9')
                                break;
                        f = 0;
                }
                i++;
        }
        if (f == 0)
                return (0);
        return (n);
}

/**
 * main - multiply 2 int
 * @argc: number of arguments.
 * @argv: pointer to array of pointers to strings.
 * Return: 0 if successfule and 1 on error.
 */

int main(int argc, char **argv)
{
	int a, b;
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	a = _atoi(argv[1]);
	b = _atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
