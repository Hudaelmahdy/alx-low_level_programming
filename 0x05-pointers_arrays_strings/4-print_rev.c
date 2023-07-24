#include <stdio.h>
#include"main.h"

/**
 * print_rev - prints reversed string followed by new line
 * @s: pointer to the string to print
 * Return: void
*/

void print_rev(char *s)
{
		int i = 0;
		int h;

		while (*s != '\0')
		{
			i++;
			s++;
		}
		s--;
		for (h = i; h > 0; h++)
		{
			putchar(*s);
			s--;
		}
		putchar('\n');
}
