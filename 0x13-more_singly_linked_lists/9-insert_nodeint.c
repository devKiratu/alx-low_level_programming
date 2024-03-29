#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at index @idx
 * @head: pointer to head node of linkedlist
 * @idx: index to insert new node
 * @n: new node's data
 * Return: Address of new node or NULL if operation fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *prev;
	listint_t *current;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		prev = *head;
		current = prev->next;
		i++;
		while (current != NULL && i < idx)
		{
			prev = current;
			current = current->next;
			i++;
		}
		if (i == idx)
		{
			new->next = prev->next;
			prev->next = new;
			return (new);
		}
	}
	free(new);
	return (NULL);
}

