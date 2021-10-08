#include <stdio.h>

/**
 * main - prints largest prime factor.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int num, fprm;

	num = 612852475143;
	for (fprm = 2; fprm <= num; fprm++)
	{
		if (num % fprm == 0)
		{
			num /= fprm;
			fprm--;
		}
	}
	printf("%ld\n", fprm);
	return (0);
}
