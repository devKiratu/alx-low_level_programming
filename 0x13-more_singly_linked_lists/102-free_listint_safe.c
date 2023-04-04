#include "lists.h"

/**
 * free_listint_safe - frees a linkedlist safely, sets @ to NULL;
 * @h: pointer to head node
 * Return: size of list freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;
	listint_t *head_ptr;

	if (h == NULL)
		return (count);

	head_ptr = *h;

	while (head_ptr != NULL)
	{
		temp = head_ptr;
		head_ptr = head_ptr->next;
		free(temp);
		count++;
	}
	*h = NULL;
	return (count);
}
