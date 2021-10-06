#include "main.h"

/**
 *print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 *
 *Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int j = 1;

	while (j <= 10)
	{
		int i;

		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
