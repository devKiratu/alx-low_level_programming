#include "lists.h"

/**
 * delete_nodeint_at_index - deletes linkedlist node at @index
 * @head: pointer to head node
 * @index: position of node to delete
 * Return: 1 if operation succeeds, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *current;
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	prev = *head;
	current = prev->next;
	i++;

	while (current != NULL)
	{
		if (i == index)
		{
			temp = current;
			prev->next = current->next;
			free(temp);
			return (1);
		}
		prev = current;
		current = current->next;
		i++;
	}
	return (-1);
}
