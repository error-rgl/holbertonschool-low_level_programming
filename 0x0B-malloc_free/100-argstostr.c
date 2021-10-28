#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concat all arguments
 * @ac: argument counter
 * @av: arguments 2D array
 * Return: new string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int row, col, count;
	int index = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (row = 0; row < ac; row++)
	{
		for (col = 0; av[row][col] != '\0'; col++)
		{
			count++;
		}
	}
	str = malloc(sizeof(char) * (count + ac + 1));
	if (str == NULL)
		return (NULL);
	for (row = 0; row < ac; row++)
	{
		for (col = 0; av[row][col] != '\0'; col++)
		{
			str[index] = av[row][col];
			index++;
		}
		str[index] = '\n';
		index++;
	}
	return (str);

}
