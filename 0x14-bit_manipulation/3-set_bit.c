#include "main.h"

/**
 * set_bit - set the bit at index
 * @n: number
 * @index: the bit
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return (!!(*n != 1l << index));
}
