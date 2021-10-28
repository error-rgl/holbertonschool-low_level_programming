#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *s_out;
	unsigned int i, j, k, stop;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	s_out = malloc(sizeof(char) * (i + j + 1));

	if (s_out == NULL)
	{
		free(s_out);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		s_out[k] = s1[k];

	stop = j;
	for (j = 0; j <= stop; k++, j++)
		s_out[k] = s2[j];

	return (s_out);
}
