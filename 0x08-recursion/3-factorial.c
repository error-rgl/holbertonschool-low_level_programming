#include "main.h"

/**
 * factorial - calculates the factorial of a given number.
 * @n: input number
 * Return: factorial of the number.
 **/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
