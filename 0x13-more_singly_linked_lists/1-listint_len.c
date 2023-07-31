#include "lists.h"
/**
 * listint_len - the number of elements in a linked list
 * @h: linked list to count
 * @Return: count of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
