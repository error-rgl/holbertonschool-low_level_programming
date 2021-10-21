#include "main.h"

/**
 * square_root - returns the natural square root of a number.
 * @num: input number.
 * @count: iterator.
 * Return: square root or -1.
 */

int square_root(int count, int num)
{
	if (count % (num / count) == 0)
	{
		if (count * (num / count) == num)
			return (count);
		else
			return (-1);
	}
	return (0 + square_root(num, count + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (square_root(n, 2));
}
