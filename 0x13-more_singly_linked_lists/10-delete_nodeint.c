#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given pos
 * @head: head of list
 * @index: index of node to delete
 * Return: success 1 failure -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	unsigned int count = 0;
	listint_t *nodedel = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (count < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		count++;
	}
	nodedel = temp->next;
	temp->next = nodedel->next;
	free(nodedel);
	return (1);
}
