#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: input string.
 * @src: input string.
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int c = 0;
	int count = 0;


	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[count] != '\0')
	{
		dest[c] = src[count];
		count++;
		c++;
	}
	dest[c] = '\0';

	return (dest);
}
