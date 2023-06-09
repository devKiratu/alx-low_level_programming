#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key of the element to add to the hash table
 * @value: value of the element to add to the hash table
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	if (ht == NULL)
		return (0);
	if (key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
	}
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}

	return (1);
}
