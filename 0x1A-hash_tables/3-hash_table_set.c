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
	const char *key_copy;
	hash_node_t *aux = NULL;
	hash_node_t *new_node = NULL;
	hash_node_t *curr = NULL;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);
	new_node = malloc(sizeof(hash_node_t *));
	if (new_node == NULL)
		return (0);
	slot = key_index((const unsigned char *)key, ht->size);
	val_copy = strdup(value);
	key_copy = strdup(key);
	new_node->key = (char *)key_copy;
	new_node->value = (char *)val_copy;
	curr = ht->array[slot];
	if (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = (char *)val_copy;
			return (1);
		}
	}
	/* collision case */
	if (ht->array[slot] == NULL)
	{
		new_node->next = NULL;
		ht->array[slot] = new_node;
	}
	else
	{
		aux = ht->array[slot];
		new_node->next = aux;
		ht->array[slot] = new_node;
	}
	return (1);
}
