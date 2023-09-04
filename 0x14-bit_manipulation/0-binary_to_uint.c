#include "main.h"

/**
 * binary_to_uint - converts binary numbers into unsigned integer
 * @b: binary numbers as a string
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (!b)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		number = number * 2 + (*b++ - '0');
	}
	return (number);
}