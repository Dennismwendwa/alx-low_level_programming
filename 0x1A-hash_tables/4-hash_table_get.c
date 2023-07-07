#include "hash_tables.h"

/**
 * hash_table_get - function that retrives values from hash table
 * @ht:- ptr to hash table
 * @key:- key of the value
 * Return:- Always 0
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int keyy_index;
	hash_node_t *hashed_node;

	if (!ht)
	{
		return (NULL);
	}

	keyy_index = key_index((unsigned char *)key, ht->size);
	hashed_node = ht->array[keyy_index];

	if (!hashed_node)
	{
		return (NULL);
	}

	while (hashed_node)
	{
		if (strcmp(hashed_node->key, key) == 0)
		{
			return (hashed_node->value);
		}

		hashed_node = hashed_node->next;
	}

	return (NULL);
}
