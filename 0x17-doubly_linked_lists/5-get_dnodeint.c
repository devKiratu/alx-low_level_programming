#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a linkedlist
 * @head: head of the linkedlist
 * @index: nth position
 * Return: nth node or NULL if operation fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (NULL);
}
