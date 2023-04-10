#include <stdio.h>

/**
 * main - Entry Point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always zero
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
