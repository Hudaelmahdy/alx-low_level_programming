#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str;
	int i = n;

if (!n)
{
	printf("\n");
	return (0);
}
va_start(ap, n);

while (i--)
{
	printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
	i ? (separator ? separator : "") : "\n");
}
va_end(ap);
}
