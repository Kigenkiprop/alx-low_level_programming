#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: Always Zero (Success)
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins;
	int r;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents >= 25)
	{
		coins = cents / 25;
		cents = cents - (25 * coins);
	}
	if (cents >= 10)
	{
		r = cents / 10;
		coins = coins + r;
		cents = cents - (10 * r);
	}
	if (cents >= 5)
	{
		r = cents / 5;
		coins = coins + r;
		cents = cents - (5 * r);
	}
	if (cents >= 2)
	{
		r = cents / 2;
		coins = coins + r;
		cents = cents - (2 * r);
	}
	if (cents >= 1)
	{
		coins += cents;
	}
	printf("%d\n", coins);
	return (0);
}
