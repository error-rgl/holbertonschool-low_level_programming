#include "main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int count = 0;


	while (dest[c] != '\0')
	{
		c++;
	}
	while (count < n && src[count] != '\0')
	{
		dest[c] = src[count];
		count++;
		c++;
	}


	return (dest);
}
