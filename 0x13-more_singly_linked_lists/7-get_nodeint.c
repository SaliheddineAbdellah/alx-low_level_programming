#include "lists.h"

/**
 * get_nodeint_at_index - return Nth node
 * @head: head of the node
 * @index: index of the node to return
 * Return: node with the index n
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}
	return (temp ? temp : NULL);
}
