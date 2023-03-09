#include "main.h"

/**
 * actual_sqrt_recursion - recurses to find the natural square root
 * of a number.
 * @n: number whose sqaure root will be returned.
 * @i: iterator.
 * Return: the resulting square root. -1 if the natural square root does
 * not exist.
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number whose square root will be returned.
 * Return: the resulting square root. -1 if the natural square root does
 * not exist.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
