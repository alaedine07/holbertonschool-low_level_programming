#include "hash_tables.h"
/**
* hash_table_create - create a hash table
* @size: size of hash table
* Return: hash table h_table
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;

	if (size == 0)
	{
		return (NULL);
	}
	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
	{
		return (NULL);
	}
	return (h_table);
}