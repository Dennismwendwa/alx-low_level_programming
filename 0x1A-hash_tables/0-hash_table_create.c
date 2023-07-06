#include "hash_tables.h"

/**
 * hash_table_create - function that create hashtable
 * and its head points to NULL
 * @size:- the size of the hashtable
 * Return:- Always 0
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;
	unsigned int j;

	if (size < 1)
	{
		return (NULL);
	}

	hashtable = malloc(sizeof(hash_table_t));
	if (!hashtable)
	{
		return (NULL);
	}

	hashtable->array = malloc(sizeof(hash_table_t *) * size);
	if (!(hashtable->array))
	{
		return (NULL);
	}

	for (j = 0; j < size; j++)
	{
		hashtable->array[j] = (NULL);
	}
	hashtable->size = size;

	return (hashtable);
}
