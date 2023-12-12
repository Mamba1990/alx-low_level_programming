#include "search_algos.h"

/**
 * interpolation_search - looks for a value in an array of
 * ints using the Interpolation SA
 *
 * @array: array
 * @size: the array's size
 * @value: value to be  searched
 * Return: the number's idx
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t p, _low, _high;
	double f;

	if (array == NULL)
		return (-1);

	_low = 0;
	_high = size - 1;

	while (size)
	{
		f = (double)(_high - _low) / (array[_high] - array[_low]) *
		(value - array[_low]);
		p = (size_t)(_low + f);
		printf("Value checked array[%d]", (int)p);

		if (p >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[p]);
		}

		if (array[p] == value)
			return ((int)p);

		if (array[p] < value)
			_low = p + 1;
		else
			_high = p - 1;

		if (_low == _high)
			break;
	}

	return (-1);
}
