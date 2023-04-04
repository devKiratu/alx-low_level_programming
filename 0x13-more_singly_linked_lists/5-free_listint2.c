#include "lists.h"

/**
 * free_listint2 - frees a linkedlist and sets the head to NULL
 * @head: pointer to head node of the linkedlist
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *head_ptr;

	if (*head == NULL)
		return;

	head_ptr = *head;

	while (head_ptr != NULL)
	{
		temp = head_ptr;
		head_ptr = head_ptr->next;
		free(temp);
	}

	*head = NULL;
}
