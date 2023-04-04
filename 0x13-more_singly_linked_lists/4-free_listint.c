#include "lists.h"

/**
 * free_listint - frees memory allocated to a linked list
 * @head: linkedlists's head node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
