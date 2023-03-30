#include "lists.h"

/**
 * free_list - frees a linked list @head
 * @head: linked list to free
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *next_ptr;

	if (head == NULL)
		return;

	while (temp != NULL)
	{
		next_ptr = temp;
		free(temp->str);
		temp = temp->next;
		free(next_ptr);
	}
}
