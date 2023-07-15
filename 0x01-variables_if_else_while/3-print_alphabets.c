#include <stdio.h>

/**
 * main - Entry point
 * Description: print alphabet in lowercase then in uppercase
 * Return: Always 0
*/

int main(void)
{
		char ch = 'a';
		char CH = 'A';

		while (ch <= 'z')
		{
				putchar(ch);
				ch++;
		}
		
		while (CH <= 'z')
		{
				putchar(CH);
		}
		putchar('\n');
		return (0);
}
