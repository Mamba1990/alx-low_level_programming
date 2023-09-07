#include "hash_tables.h"

/**
 * hash_table_create - Creates a ht.
 * @size: array's size
 *
 * Return: errotr - NULL.
 *         Otherwise - address of the new ht.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_t;
	unsigned long int k;

	h_t = malloc(sizeof(hash_table_t));
	if (h_t == NULL)
		return (NULL);

	h_t->size = size;
	h_t->array = malloc(sizeof(hash_node_t *) * size);
	if (h_t->array == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
		h_t->array[k] = NULL;

	return (h_t);
}
