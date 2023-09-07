#include "hash_tables.h"

/**
 * hash_table_print - Prints hash table.
 * @ht: Pointer to the hash table to print.
 *
 * Description: Key or value pairs are printed in order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j;
	unsigned char comma_flag = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[j];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}