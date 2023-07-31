#include "lists.h"

/**
 * pop_listint - deletes head and returns head data
 * @head: node to be deleted
 * Return: data of head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nbhead;

	if (!head || !*head)
		return (0);

	nbhead = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (nbhead);
}
