#include "main.h"

/**
 * swap_int - swap the vsalues of two integers.
 *
 * @a: firts ionteger.
 * @b: second integer.
 *
 * Return: no return.
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
