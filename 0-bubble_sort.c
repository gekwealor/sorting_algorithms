#include "sort.h"

/**
 * swap_ints - a function that swaps two ints in an array.
 * @c: The int to swap first.
 * @d: The int to swap second.
 */
void swap_ints(int *c, int *d)
{

	int tmp;

	tmp = *c;
	*c = *d;
	*d = tmp;
}

/**
 * bubble_sort - In ascending order sort an array of ints.
 * @array: Sort an array of integers
 * @size: The array size.
 *
 * Desc: Must print array from each swap.
 */
void bubble_sort(int *array, size_t size)
{

	size_t j, length = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{

		bubbly = true;
		for (j = 0; j < length - 1; j++)
		{

			if (array[j] > array[j + 1])
			{

				swap_ints(array + j, array +j + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		length--;
	}
}
