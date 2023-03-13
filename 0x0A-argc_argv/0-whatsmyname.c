#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints its (file) name, followed by a new line.
 * @argc: size of argv[].
 * @argv: a pointer to array of pointers.
 * Return: EXIT_SUCCESS.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	exit(EXIT_SUCCESS);
}
