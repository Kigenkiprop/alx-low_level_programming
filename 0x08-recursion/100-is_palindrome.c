#include "main.h"

/**
 * s_length - Calculate the length of the string
 * @s: String to be checkded
 * Return: Length of the string
 */

int s_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + s_length(s + 1));
}

/**
 * comp_char - Compare character starting from first and last
 * @s: String to be checked
 * @s_len: Length of the string
 * Return: 1 if palindrome, else 0.
 */

int comp_char(char *s, int s_len)
{
	if (s_len <= 0)
		return (1);
	if (*s != *(s + (s_len - 1)))
		return (0);
	s_len -= 2;
	s++;
	return (comp_char(s, s_len));
}

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: Pointer to a string to be evaluated
 * Return: Either 1 or 0
 */

int is_palindrome(char *s)
{
	int s_len;

	s_len = s_length(s);

	if (s_len == 0)
		return (0);
	if (s_len == 1)
		return (1);
	return (comp_char(s, s_len));
}
