#include "hash_tables.h"

/**
 * shash_table_create - creates an ordered hash table
 * @size: size of the hash table
 * Return: hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);
	sht->array = malloc(sizeof(shash_node_t *) * size);
	if (sht->array == NULL)
		return (NULL);
	sht->size = size;
	return (sht);
}
