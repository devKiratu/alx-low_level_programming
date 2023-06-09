#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table, freeing all the memory allocated
 * @ht: hash table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *runner;
	unsigned long int i = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				runner = temp;
				temp = temp->next;
				free(runner->key);
				free(runner->value);
				free(runner);
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
