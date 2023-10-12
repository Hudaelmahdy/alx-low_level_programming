#include "lists.h"

/**
 * print_dlistint - function to print the doubly linked list
 * @h: address of head node
 * Return: size of the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
