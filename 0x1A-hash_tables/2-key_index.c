#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: string to hash and generate an index from
 * @size: size of the hash table
 * Return: index at which the key/value pair willbe stored in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
