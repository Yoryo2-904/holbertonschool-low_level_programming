#include "main.h"

/**
 * _strlen - measure the length of a string
 * @s: the string to be measure
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;
	char *_s = (char *) s;

	while (_s[i])
		i++;
	return (i);
}
/**
 * binary_to_uint - converts binary to ints(decimal)
 * @b: the string/number to convert
 *
 * Return: the decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, n = 0, result = 0;
	int b_len = 0;
	char *_b = (char *) b;

		if (_b == NULL)
			return (0);
	b_len = _strlen(_b) - 1;

	for (i = b_len, n = 1; i >= 0; i--, n *= 2)
	{
		if (_b[i] != '1' && _b[i] != '0')
			return (0);
		if (_b[i] == '1')
			result += n;
	}
	return (result);
}
