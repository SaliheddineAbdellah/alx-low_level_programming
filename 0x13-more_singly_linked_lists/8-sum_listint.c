#include "lists.h"

/**
 * sum_listint - sum of all data in list
 * @head: head of list
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int result = 0;
	listint_t *temp = head;

	while (temp)
	{
		result += temp->n;
		temp = temp->next;
	}
	return (result);
}
