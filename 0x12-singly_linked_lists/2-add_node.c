#include "lists.h"

/**
 * add_node - adds a new node to the beginning of a linkedlist @head
 * @head: pointer to head of the list
 * @str: string to add to new node
 * Return: pointer to created node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
