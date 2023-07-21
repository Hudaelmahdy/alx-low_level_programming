#include"main.h"

/**
 * print_square - print a square using character #
 * @size: is the size of the square
 * Return: always 0 (success)
*/

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; i < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
