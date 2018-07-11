#include "holberton.h"

/**
  * prime - determines if a number is prime or not
  * @r: contains an integer
  * @n: contains an integer
  * Return: 1 if n is prime, 0 otherwise
  */

int prime(int n, int r)
{
	if (r >= n / 2)
		return (1);
	if (n % r == 0)
		return (0);
	return (prime(n, r + 1));
}

/**
  * is_prime_number - determines if a number is prime or not
  * @n: contains an integer
  * Return: 1 if the number is a prime, otherwise 0
  */

int is_prime_number(int n)
{
	if (n == 1 || n == -1)
		return (0);
	return (prime(n, 2));
}
