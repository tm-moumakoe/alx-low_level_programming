#include "main.h"

/**
 * _pow_recursion - returns x^y.
 * @x: base.
 * @y: exponent.
 * Return: x^y. -1 if y < 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
