#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: String to be printed
 */

void puts_half(char *str)
{
	int index = 0;
	int len = 0;

	while (str[index++])
		len++;

	if ((len % 2) == 0)
	{
		for (index = (len / 2); index < len; index += 1)
		{
			_putchar(str[index]);
		}
	}
	else
		for (index = ((len + 1) / 2); index < len; index += 1)
		{
			_putchar(str[index]);
		}
	_putchar('\n');
}
