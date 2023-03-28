/**
 * _strlen - Function to return the length of a string
 * @s: String to be evaluated
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
