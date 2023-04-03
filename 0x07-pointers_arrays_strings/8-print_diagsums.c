#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagnols
 * @a: The square matrix
 * @size: Size of the matrix
 */

void print_diagsums(int *a, int size)
{
	unsigned int sum = 0;
	unsigned int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", sum, sum2);
}
