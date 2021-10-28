#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concat all arguments
 * @ac: argument counter
 * @av: arguments 2D array
 * Return: new string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int row, index = 0;
	int size = 0;
	unsigned int col, leng;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (row = 0; row < ac; row++)
	{
		for (leng = 0; leng < strlen(av[row]); leng++)
		{
			size++;
		}
	}
	str = malloc(sizeof(char) * size + ac);
	if (str == NULL)
		return (NULL);
	for (row = 0; row < ac; row++)
	{
		for (col = 0; col < strlen(av[row]); col++)
		{
			str[index] = av[row][col];
			index++;
		}
		str[index] = '\n';
		index++;
	}
	return (str);

}
