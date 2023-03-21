#include "main.h"

/**
 * print_alphabet_x10 - Function to print 10 times the alphabet in lowercase
 * Return: Does not return any value(s)
 */

void print_alphabet_x10(void)
{
	int counter;
	char ch;

	counter = 1;

	while (counter <= 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		counter++;
		_putchar('\n');
	}
}
