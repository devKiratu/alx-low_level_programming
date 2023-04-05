#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linkedlist
 * @head: pointer to head node of the linked list
 * description: this implementation uses Floyd's cycle-finding algorithm
 *
 * Return: address of the node where the loop starts or NULL if there's none
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head;
	listint_t *slow = head;

	if (head == NULL)
		return (NULL);

	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;

		if (fast == slow)
			break;
	}

	if (fast == slow)
	{
		slow = head;
		while (slow != head)
		{
			slow = slow->next;
			fast = fast->next;
		}
		return (slow);
	}
	else
	{
		return (NULL);
	}
}

