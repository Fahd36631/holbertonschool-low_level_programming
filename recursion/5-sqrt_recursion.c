#include "main.h"

/**
 * sqrt_helper - helper function to find sqrt recursively
 * @n: number to find sqrt of
 * @i: current guess
 *
 * Return: sqrt of n or -1 if not found
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate sqrt of
 *
 * Return: natural sqrt or -1 if not perfect square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}
