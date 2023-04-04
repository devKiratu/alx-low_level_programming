#include "lists.h"

/**
 * reverse_listint - reverses a linkedlist
 * @head: pointer to the head node of the linkedlist
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp_head;
	listint_t *prev;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;
	while (*head != NULL)
	{
		temp_head = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp_head;
	}
	*head = prev;

	return (*head);
}

