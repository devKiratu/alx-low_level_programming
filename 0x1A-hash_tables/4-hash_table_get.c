#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value from @ht associated with a @key
 * @ht: hash table
 * @key: key to the value to retrieve
 * Return: value associated with key or NULL if operation fails
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || ht->array == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
