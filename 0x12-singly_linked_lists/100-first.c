#include <stdio.h>
#include "lists.h"

void _constructor(void) __attribute__((constructor));
/**
 * first - print a sentence
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
