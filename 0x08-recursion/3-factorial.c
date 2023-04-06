#include "main.h"

/**
 * factorial - Rteurns the factorial of a given number
 * @n: Number to be evaluated
 * Return: Either -1, a or the factorial of n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
