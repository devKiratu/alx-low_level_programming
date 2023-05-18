#include "lists.h"

/**
 * sum_dlistint - adds upp all the data in a linkedlist
 * @head: head of the linkedlist
 * Return: sum of the data or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
