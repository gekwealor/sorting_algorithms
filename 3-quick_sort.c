#include "sort.h"

int lomuto_partition(int *array, size_t size, int left, int right);
void swap_ints(int *a, int *b);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/**
 * lomuto_partition - should order a subset of an array of integers
 * @array: the integers of an array
 * @size: the size of an array
 * @left: the subset to order the starting index
 * @right: the subset to order the ending index
 * Return: the final partition index to be returned
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{

	int *pivot, above, below;

	pivot = array + right;
	for (above = below = left; below < right; below++)
	{

		if (array[below] < *pivot)
		{

			if (above < below)
			{

				swap_ints(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{

		swap_ints(array + above, pivot);
		print_array(array, size);
	}

	return (above);
}

/**
 * swap_ints - Two integers in an array to be swaped.
 * @i: Swap The first integer
 * @j: Swap The second integer
 */
void swap_ints(int *i, int *j)
{

	int tmp;

	tmp = *i;
	*i = *j;
	*j = tmp;

}

/**
 * lomuto_sort - Through recursion implement the quicksort algorithm.
 * @array: To sort an array of integers.
 * @size: The array size.
 * @left: The starting index of the array partition to order.
 * @right: The ending index of the array partition to order.
 *
 * Description: Should use the Lomuto partition scheme.
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{

	int part;

	if (right - left > 0)

	{

		part = lomuto_partition(array, size, left, right);
		lomuto_sort(array, size, left, part - 1);
		lomuto_sort(array, size, part + 1, right);
	}
}

/**
 * quick_sort - In ascending order using the quicksort algorithm.
 * @array: The integers of the array
 * @size: The array size.
 *
 * Desc: Uses the Lomuto partition scheme. Prints
 * the array after each swap of two elements.
 */
void quick_sort(int *array, size_t size)
{

	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, size, 0, size - 1);
}
