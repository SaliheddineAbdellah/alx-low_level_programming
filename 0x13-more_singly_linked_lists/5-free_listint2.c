#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tempo;

	if (head == NULL)
		return;
	while (*head)
	{
		tempo = (*head)->next;
		free(*head);
		*head = tempo;
	}
	*head = NULL;
}
