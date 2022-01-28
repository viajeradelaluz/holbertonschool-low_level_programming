#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: hash table to add.
 * @key: key to add.
 * @value: value associated to the key.
 * Return: 1 if success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *key_copy = NULL;
	char *value_copy = NULL;
	unsigned long int index = 0;
	hash_node_t *node_at_index = NULL;

	if (!ht || !key)
		return (0);

	node_at_index = malloc(sizeof(hash_node_t));
	if (!node_at_index)
		return (0);

	key_copy = strdup(key);
	value_copy = strdup(value);
	index = key_index((unsigned char *)key, ht->size);

	node_at_index->key = key_copy;
	node_at_index->value = value_copy;
	node_at_index->next = NULL;

	if (ht->array[index] != NULL)
		node_at_index->next = ht->array[index];

	ht->array[index] = node_at_index;

	return (1);
}
