#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    const char *val_copy;
    hash_node_t *new_node;
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
    //printf("index is :%ld\n", slot); 
    if (ht->array[slot] == NULL)
    {
        /* create new node */
        new_node = malloc(sizeof(hash_table_t *));
        new_node->key = (char *)key;
        new_node->value = (char *)value;
        new_node->next = NULL;
        /* add node to the table */
        ht->array[slot] = new_node;
        printf("key is %s\n", ht->array[slot]->key);
    }
    return (1);
}