#include "lists.h"

/**
 * insert_nodeint_at_index - insets new node at given pos
 * @head: head of list
 * @idx: index of insertion
 * @n: data of node
 * Return: node to be inserted
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *newnode;
	unsigned int count;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (count = 0; temp && count < idx; count++)
	{
		if (count == idx - 1)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
			}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}

