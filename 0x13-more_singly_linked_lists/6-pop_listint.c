#include "lists.h"

/**
 * pop_listint - deletes head node of linkedlist
 * @head: pointer to linkedlist head node
 * Return: head node's data or 0 if linkedlist is empty
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (head == NULL)
		return (data);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
