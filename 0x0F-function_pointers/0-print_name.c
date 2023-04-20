#include <stdio.h>
#include <stdlib.h>

/**
 * f - Function to print the name
 * @name: Array of characters to be printed
 */

void f(char *name)
{
	printf("%s", name);
}

/**
 * print_name - Funtion to print a name
 * @name: Array characters to be printed
 * @f: Pointer to function to print name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
	else
		return;
}
