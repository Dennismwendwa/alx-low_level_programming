#include "hash_tables.h"

/**
 * hash_table_set - function that adds element in the hash table
 * @ht:- ptr to hash table
 * @key:- the key to add
 * @value: the values to add
 * Return:- Always 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nw_node;
	unsigned long int indx;
	unsigned long int siz;

	if (!key || !value || !ht)
	{
		return (0);
	}

	siz = ht->size;
	indx = key_index((const unsigned char *) key, siz);

	if (ht->array[indx] != NULL && strcmp(ht->array[indx]->key, key) == 0)
	{
		ht->array[indx]->value = strdup(value);
		return (1);
	}

	nw_node = malloc(sizeof(hash_node_t));
	if (!nw_node)
	{
		return (0);
	}

	nw_node->key = strdup(key);
	nw_node->value = strdup(value);
	nw_node->next = ht->array[indx];
	ht->array[indx] = nw_node;

	return (1);
}
