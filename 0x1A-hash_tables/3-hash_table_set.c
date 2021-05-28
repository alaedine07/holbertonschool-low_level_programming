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
	const char *val_copy;
	hash_node_t *new_node;
	hash_node_t *aux;
	unsigned long int slot;
	/* some checks */
	if (!key)
	{
		return (0);
	}
	val_copy = strdup(value);
	if (val_copy == NULL)
	{
		return (0);
	}
	/* find a slot in the hash table */
	slot =  key_index((const unsigned char *)key, ht->size);
	if (ht->array[slot] == NULL)
	{
		/* create new node */
		new_node = malloc(sizeof(hash_table_t *));
		new_node->key = (char *)key;
		new_node->value = (char *)value;
		new_node->next = NULL;
		/* add node to the table */
		ht->array[slot] = new_node;
	}
	else
	{
		/* handle collisions */
		new_node = malloc(sizeof(hash_table_t *));
		new_node->key = (char *)key;
		new_node->value = (char *)value;
		aux = new_node;
		new_node->next = ht->array[slot];
		ht->array[slot] = aux;
	}
	return (1);
}
