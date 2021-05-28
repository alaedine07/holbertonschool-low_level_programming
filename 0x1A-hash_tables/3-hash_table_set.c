#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: The hash table you want to add or update the key/value to.
 * @key: The key
 * @value: The value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int slot;
	const char *val_copy;
	hash_node_t *aux = NULL;
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t *));
	if (new_node == NULL)
	{
		return (0);
	}
	if (key == (const char *)"")
	{
		return (0);
	}
	/* get the slot */
	slot = key_index((const unsigned char *)key, ht->size);
	val_copy = strdup(value);
	new_node->key = (char *)key;
	new_node->value = (char *)val_copy;
	if (ht->array[slot] == NULL)
	{

		new_node->next = NULL;
		ht->array[slot] = new_node;
	}
	else
	{
		aux = new_node;
		new_node->next = ht->array[slot];
		ht->array[slot] = aux;
	}
	return (1);
}
