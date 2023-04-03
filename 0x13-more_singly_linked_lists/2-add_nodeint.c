#include "lists.h"

/**
 * add_nodeint - adds a new node to the linkedlist
 * @head: pointer to linkedlist head
 * @n: linked list node value
 * Return: modified linkedlist or NULL if the operation fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
