#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a linkedlist
 * @head: pointer to the head of a linkedlist
 * @n: data to add to new node
 * Return: address of new element or NULL if operation fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;
	return (new);
}
