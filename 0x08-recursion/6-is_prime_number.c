#include "main.h"

/**
 * check_prime - Check whether n is divisible
 * @n: Number to be evaluated
 * @divisor: The divisor
 * Return: 1 if n is prime number; else 0.
 */

int check_prime(int n, int divisor)
{
	if (divisor == n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (check_prime(n, divisor + 1));
}

/**
 * is_prime_number - Check for prime number
 * @n: Number to be evaluated
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	int divisor = 2;

	if (n < divisor || n % 2 == 0)
		return (0);
	if (n == 2)
		return (1);

	return (check_prime(n, divisor));
}
