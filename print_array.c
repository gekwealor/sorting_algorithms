#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - a funct that prints an array of ints
 *
 * @array: Printed arrays
 * @size: Elements in a number of arrays
 */
void print_array(const int *array, size_t size)
{

	size_t i;

	i = 0;
	while (array && i < size)
	{

		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
