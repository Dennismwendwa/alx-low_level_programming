#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes hash tables
 * @ht:- ptr to the hash table
 * Return:- Always 0
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j = 0;
	hash_node_t *delete = NULL;
	hash_node_t *head = NULL;

	while (j < ht->size)
	{
		if (ht->array[j])
		{
			head = ht->array[j];
			while (head)
			{
				delete = head;
				head = head->next;
				free(delete->value);
				free(delete->key);
				free(delete);
			}
		}

		j = j + 1;
	}

	free(ht->array);
	free(ht);
}
