#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp_node;
	char *separator = "";

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp_node = ht->array[i];
		while (temp_node)
		{
			printf("%s'%s': '%s'", separator, temp_node->key, temp_node->value);
			separator = ", ";
			temp_node = temp_node->next;
		}
	}
	printf("}\n");
}
