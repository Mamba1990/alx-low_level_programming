#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: An address to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *h = ht;
	hash_node_t *_node, *t;
	unsigned long int k;

	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			_node = ht->array[k];
			while (_node != NULL)
			{
				t = _node->next;
				free(_node->key);
				free(_node->value);
				free(_node);
				_node = t;
			}
		}
	}
	free(h->array);
	free(h);
}
