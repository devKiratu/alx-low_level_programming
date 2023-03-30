#include "lists.h"

/**
 * *add_node_end - adds node at the end of the linkedlist @head
 * @head: linkedlist to add node at its tail
 * @str: string to add a member of the new node
 * Return: address of new element or NULL if the operation fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}

	return (*head);
}
