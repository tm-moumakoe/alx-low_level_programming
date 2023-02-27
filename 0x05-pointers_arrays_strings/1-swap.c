#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: int to be switched with b.
 * @b: int to be switched with a.
 * @temp: temporary variable to help switch a and b.
 */

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
