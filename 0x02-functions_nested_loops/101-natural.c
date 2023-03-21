#include<stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int sum;

	a = 0;

	while (a <= 1024)
	{
		if (((a % 3) == 0) || ((a % 5) == 0))
			sum += a;
		a++;
	}
	printf("%d\n", sum);
	return (0);
}
