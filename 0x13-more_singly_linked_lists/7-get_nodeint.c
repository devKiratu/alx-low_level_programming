#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index @index
 * @head: pointer to linkedlist head node
 * @index: index of the required node
 * Return: node at index @index or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (index == i)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
