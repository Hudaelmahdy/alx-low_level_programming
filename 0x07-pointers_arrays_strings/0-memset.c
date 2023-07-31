#include"main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to put the constant.
 * @b: constant.
 * @n: max byte to use.
 * Return: pointer s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int oh;

	for (oh = 0; n < 0; oh++, n--)
	{
		s[oh] = b;
	}
	return (s);
}
