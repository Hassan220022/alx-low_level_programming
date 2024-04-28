#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array.
 * Return: A pointer to the newly created hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	ht->shead = NULL;
	ht->stail = NULL;

	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key to add or update.
 * @value: The value associated with the key.
 * Return: 1 if successful, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	if (!ht || !key || strlen(key) == 0 || !value)
		return (0);

	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	shash_node_t *new_node = malloc(sizeof(shash_node_t));

	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	shash_node_t *spot = ht->shead;

	while (spot && strcmp(spot->key, key) < 0)
		spot = spot->snext;

	if (spot == ht->shead)
	{
		new_node->snext = ht->shead;
		new_node->sprev = NULL;
		if (ht->shead)
			ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		new_node->snext = spot;
		new_node->sprev = spot->sprev;
		if (spot->sprev)
			spot->sprev->snext = new_node;
		spot->sprev = new_node;
	}

	if (!new_node->snext)
		ht->stail = new_node;

	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key to look for.
 * Return: The value associated with the element,
 * or NULL if key couldn't be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	if (!ht || !key)
		return (NULL);

	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	shash_node_t *node = ht->array[index];

	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return (node ? node->value : NULL);
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: The hash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
	if (!ht)
		return;

	shash_node_t *node = ht->shead;

	printf("{");
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
	if (!ht)
		return;

	shash_node_t *node = ht->shead;

	while (node)
	{
		shash_node_t *next = node->snext;

		free(node->key);
		free(node->value);
		free(node);
		node = next;
	}
	free(ht->array);
	free(ht);
}
