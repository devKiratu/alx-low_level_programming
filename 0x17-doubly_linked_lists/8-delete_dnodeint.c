#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at @index
 * @head: pointer to linkedlist head
 * @index: position of node to remove
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp != NULL)
	{
		if (count == index)
		{
			(temp->next)->prev = temp->prev;
			(temp->prev)->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
