#include "main.h"

/**
 * square_root - determines square root
 * @a: input integer
 * @b: input integer
 * Return:input integer
 */

int square_root(int a, int b)
{
	if (b * b > a)
	{
		return (-1);
	}
	if (b * b == a)
	{
		return (b);
	}

	return (square_root(a, b + 1));
}

/**
 * _sqrt_recursion - a function that prints
 * the natural square root of a no
 * @n: number to find the square root
 * Return:  -1 if n does not have a nature
 * @n: no whose square root is beem found
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square_root(n, 1));
}
