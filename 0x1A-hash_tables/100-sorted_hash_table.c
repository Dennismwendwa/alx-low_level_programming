#include "hash_tables.h"

/**
 * shash_table_create - function that creates hash table
 * @size:- size of table
 * Return:- Always 0
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_tble = NULL;

	new_tble = malloc(sizeof(shash_table_t));
	if (new_tble == NULL)
	{
		return (NULL);
	}
	new_tble->size = size;

	new_tble->array = malloc(sizeof(void *) * size);
	if (!(new_tble->array))
	{
		free(new_tble);
		return (NULL);
	}

	new_tble->shead = NULL;
	new_tble->stail = NULL;

	return (new_tble);
}

/**
 * shash_table_set - function that sets nodes keys
 * @ht:- hash table ptr
 * @key:- key of the data
 * @value:- values to add
 * Return: Always 0
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx;
	shash_node_t *nw = NULL, *ptm = NULL;

	if (!ht || !key || (strlen(key) == 0))
		return (0);
	indx = hash_djb2((const unsigned char *)key) % ht->size;
	nw = malloc(sizeof(shash_node_t));
	nw->key = strdup(key);
	nw->value = strdup(value);
	nw->next = ht->array[indx];
	ht->array[indx] = nw;
	nw->snext = nw->sprev = NULL;
	ptm = ht->shead;
	if (ptm == NULL)
	{
		ht->shead = ht->stail = nw;
		return (1);
	}
	while (ptm != NULL)
	{
		if (strcmp(key, ptm->key) <= 0)
		{
			nw->snext = ptm;
			nw->sprev = ptm->sprev;
			ptm->sprev = nw;
			if (nw->sprev == NULL)
				ht->shead = nw;
			else
				nw->sprev->snext = nw;
			return (1);
		}
		if (ptm->snext)
			ptm = ptm->snext;
		else
			break;
	}
	ptm->snext = nw;
	nw->sprev = ptm;
	ht->stail = nw;
	return (1);
}

/**
 * shash_table_get - function that gets elements from table
 * @ht:- hash table ptr
 * @key:- key to add
 * Return: Always 0
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *kichwa = NULL;
	unsigned long int indx = 0;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	indx = hash_djb2((unsigned char *)key) % ht->size;

	if (ht->array[indx])
	{
		kichwa = ht->array[indx];
		while (kichwa != NULL)
		{
			if (strcmp(kichwa->key, key) == 0)
				break;
			kichwa = kichwa->next;
		}
	}
	else
	{
		return (NULL);
	}

	return (kichwa->value);
}

/**
 * shash_table_print - function that prints hash table
 * @ht:- hash table ptr
 * Return: Always 0
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *pmt = NULL;

	if (ht != NULL)
	{
		putchar('{');
		pmt = ht->shead;

		while (pmt != NULL)
		{
			printf("'%s': '%s'", pmt->key, pmt->value);

			if (pmt->snext != NULL)
			{
				printf(", ");
			}
			pmt = pmt->snext;
		}

		printf("}\n");

	}
}

/**
 * shash_table_print_rev - function that prints hash table in reverse
 * @ht:- hash table ptr
 * Return: Always 0
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *pmt = NULL;

	if (ht != NULL)
	{
		putchar('{');
		pmt = ht->stail;

		while (pmt != NULL)
		{
			printf("'%s': '%s'", pmt->key, pmt->value);

			if (pmt->sprev != NULL)
			{
				printf(", ");
			}
			pmt = pmt->sprev;
		}

		printf("}\n");
	}
}

/**
 * shash_table_delete - function that deletes hash table
 * @ht:- hash table ptr
 * Return: Always 0
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *kichwa = NULL;
	shash_node_t *pmt = NULL;

	while (kichwa != NULL)
	{
		pmt = kichwa;
		kichwa = kichwa->snext;
		free(pmt->value);
		free(pmt->key);
		free(pmt);
	}

	free(ht->array);
	free(ht);
}
