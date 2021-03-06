#include "holberton.h"

/**
 * prime_iterate - finds out if a number is a prime number.
 * @n: A number to evaluate as prime or not.
 * @i: A number used to find the prime number.
 *
 * Return: 1 if the input is a prime number, otherwise return 0.
 */
int prime_iterate(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if (i == n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (prime_iterate(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number.
 * otherwise return 0.
 * @n: A number to evaluate as prime or not.
 *
 * Return: 1 if the input is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	int i;

	i = 2;
	return (prime_iterate(n, i));
}
