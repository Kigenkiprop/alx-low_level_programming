#include <stdio.h>

/**
 * main - Entry Point
 * @argc: Argument count
 * @argv: Argument Vector
 * Return: Always success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
