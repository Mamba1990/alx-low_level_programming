#include "hash_tables.h"

/**
 * hash_table_print - Prints a ht.
 * @ht: An address of  the hash table to be  printed.
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *_node;
	unsigned long int k;
	unsigned char commaFlag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			if (commaFlag == 1)
				printf(", ");

			_node = ht->array[k];
			while (_node != NULL)
			{
				printf("'%s': '%s'", _node->key, _node->value);
				_node = _node->next;
				if (_node != NULL)
					printf(", ");
			}
			commaFlag = 1;
		}
	}
	printf("}\n");
}
