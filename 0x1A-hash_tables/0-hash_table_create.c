#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table array
 * Return: pointer to the newly created hash table or NUll if operation fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	hash_node_t **array;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	hash->size = size;
	hash->array = array;
	return (hash);
}
