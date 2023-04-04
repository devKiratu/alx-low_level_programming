#include "lists.h"

/**
 * sum_listint - sums all the data in linkedlist @head
 * @head: pointer to head node of linked list
 * Return: sum of all data in linkedlist @head or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum  = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
