#include "hash_tables.h"

/**
 * hash_table_print - prints hash table @ht
 * @ht: hash table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i = 0, printed = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		temp = ht->array[i];
		if (temp != NULL)
		{
			if (printed)
				printf(", ");
			while (temp != NULL)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				printed++;
				if (temp->next != NULL)
					printf(", ");
				temp = temp->next;
			}
		}
		i++;
	}
	printf("}\n");
}
