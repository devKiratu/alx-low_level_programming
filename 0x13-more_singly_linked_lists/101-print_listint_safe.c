#include "lists.h"

/**
 * print_listint_safe - prints a linkedlist, exits with status 98 on failure
 * @head: head node of the linked list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head;
	const listint_t *prev;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;

		prev = temp;
		temp = temp->next;

		if (prev <= temp)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			exit(98);
		}
	}

	return (count);
}
