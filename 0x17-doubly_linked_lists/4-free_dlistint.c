#include "lists.h"

/**
 * free_dlistint - frees memory allocated to a linkedlist
 * @head: head of the linkedlist
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
