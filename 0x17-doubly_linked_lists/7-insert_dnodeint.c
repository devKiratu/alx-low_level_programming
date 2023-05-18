#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at position @idx
 * @h: pointer to linkedlist's head
 * @idx: index to insert new node
 * @n: data to add to new node
 * Return: address of new node or NULL if operation fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new, *temp;

	if (*h == NULL && idx != 0)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	temp = *h;
	while (temp->next != NULL)
	{
		if (idx == count)
		{
			new->next = temp;
			new->prev = temp->prev;
			temp->prev = new;
			(new->prev)->next = new;
			return (new);
		}
		temp = temp->next;
		count++;
	}
	if (idx == count + 1)
	{
		temp->next = new;
		new->prev = temp;
		return (new);
	}
	return (NULL);
}
