#include "main.h"

/**
 * _isdigit - function  that checks for
 * a digit (0 through 9).
 *
 * @c: inout number.
 *
 * Return: 1 if is a digit (0 to 9)
 * otherwise return 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
