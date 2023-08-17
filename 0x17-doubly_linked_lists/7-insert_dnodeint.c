#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at
 * a specific position
 *
 * @h: head
 * @idx: index
 * @n: input
 * Return: pointer to the new node, or NULL (failure)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *_new;
	dlistint_t *_head;
	unsigned int j;

	_new = NULL;
	if (idx == 0)
		_new = add_dnodeint(h, n);
	else
	{
		_head = *h;
		j = 1;
		if (_head != NULL)
			while (_head->prev != NULL)
				_head = _head->prev;
		while (_head != NULL)
		{
			if (j == idx)
			{
				if (_head->next == NULL)
					_new = add_dnodeint_end(h, n);
				else
				{
					_new = malloc(sizeof(dlistint_t));
					if (_new != NULL)
					{
						_new->n = n;
						_new->next = _head->next;
						_new->prev = _head;
						_head->next->prev = _new;
						_head->next = _new;
					}
				}
				break;
			}
			_head = _head->next;
			j++;
		}
	}

	return (_new);
}
