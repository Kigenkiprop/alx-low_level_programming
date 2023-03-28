/**
 * swap_int - Function to swap value of two integers
 * @a: First Integer
 * @b: Second Integer
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int m;
	int n;

	m = *a;
	n = *b;

	*a = n;
	*b = m;
}
