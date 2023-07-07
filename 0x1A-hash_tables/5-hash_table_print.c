#include "hash_tables.h"

/**
 * hash_table_print - function that prints hash table
 * @ht:- ptr to the hash table
 * Return:- Always 0
 */

void hash_table_print(const hash_table_t *ht)
{
	int start = 0;
	unsigned long int indx = 0;
	hash_node_t *ptr_node;

	if (!ht)
	{
		return;
	}
	
	printf("{");

	while (indx < ht->size)
	{
		ptr_node = ht->array[indx];

		while (ptr_node)
		{
			if (start == 0)
			{
				printf("'%s': '%s'", ptr_node->key, ptr_node->value);
				start = 1;
			}
			else
			{
				printf(", '%s': '%s'", ptr_node->key, ptr_node->value);
			}

			ptr_node = ptr_node->next;
		}

		indx = indx + 1;
	}

	printf("}\n");
}
