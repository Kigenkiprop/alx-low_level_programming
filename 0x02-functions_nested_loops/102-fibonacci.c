#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long n;
	unsigned long f;
	unsigned long sum;
	int counter;

	n = 0;
	f = 1;

	for (counter = 0; counter < 50; counter++)
	{
		sum = n + f;
		printf("%lu", sum);

		n = f;
		f = sum;

		if (counter == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
