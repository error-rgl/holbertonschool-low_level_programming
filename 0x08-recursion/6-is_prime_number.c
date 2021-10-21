#include "main.h"

/**
 * is_prime - detects if an input number is a prime number.
 * @n: input number.
 * @i: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */

int primes(int n, int i)
{
	if (n != i && n % i == 0)
		return 0;
	if (n == i && n % i == 0)
		return 1;
	else
		return primes(n, i +1);
}

/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_proceso(2, n));
}
