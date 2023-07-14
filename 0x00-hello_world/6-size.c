#include <stdio.h>
/**
 * main - print string in the printf function
 * Description: using the main function
 * this program print Programming is like building a multilingual puzzle
 * Return: 0
*/
int main(void)
{
	char c;
	int i;
	long lo;
	long long lloo;
	float f;

	printf("size of a char: %ld byte(s)\n", sizeof(c));
	printf("size of a int: %ld byte(s)\n", sizeof(i));
	printf("size of a long: %ld byte(s)\n", sizeof(lo));
	printf("size of a long long: %ld byte(s)\n", sizeof(lloo));
	printf("size of a char: %ld byte(s)\n", sizeof(f));
	return (0);
}
