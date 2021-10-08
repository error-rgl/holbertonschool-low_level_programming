#include "main.h"
/**
 * _isupper - function that checks for
 * uppercase character.
 *
 * @c: input character.
 *
 * Return: 1 if character is uppercase
 * otherwise return 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
