#include "lists.h"

/**
 * print_listint - returns the number of elements in a linked list
 * @h: linked list to be printed
 * Return: list of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
