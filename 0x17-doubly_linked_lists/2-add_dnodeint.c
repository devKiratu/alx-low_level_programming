#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a doubly linkedlist
 * @head: pointer to linkedlist head
 * @n: data to add in the new node
 * Return: address of the new element or NULL if operation fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
}
