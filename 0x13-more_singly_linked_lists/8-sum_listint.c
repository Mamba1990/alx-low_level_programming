#include "lists.h"

/**
 * sum_listint - computes the sum of all the data in a listint_t list
 * @head : pointer to the first node
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (!head)
	{
		return (0);
	}
	else
	{
		for (; head != NULL; head = head->next)
		{
			sum += head->n;
		}
	}
	return (sum);
}
