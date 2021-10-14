#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: input string.
 *
 *Return: length of a string.
 */

int _strlen(char *s)
{
	int s_Length = 0;

	while (s[s_Length] != 0)
	{
		s_Length++;
	}
	return (s_Length);
}
