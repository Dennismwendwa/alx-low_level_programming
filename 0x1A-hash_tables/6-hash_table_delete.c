#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes hash tables
 * @ht:- ptr to the hash table
 * Return:- Always 0
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j = 0;
	hash_node_t *delete;

	while (j < ht->size)
	{
		while (ht->array[j])
		{
			delete = ht->array[j];
			free(delete->key);
			free(delete->value);
			ht->array[j] = ht->array[j]->next;
			free(delete);
		}

		j = j + 1;
	}

	free(ht->array);
	free(ht);
}
