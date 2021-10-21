#include "main.h"

/**
 * square_root - returns the natural square root of a number.
 * @n: input number.
 * @count: iterator.
 * Return: square root or -1.
 */

int square_root(int count, int n)
{
	if (count * count == n)
	{
       		return (count);
	}
	if (count * count > n)
	{
		return (-1);
	}
	return (square_root(count + 1, n));
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

	return (square_root(n, 1));
}
