#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - func that prints each array elements
 * @array: array
 * @size: num of elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
		 unsigned int itr;

	if (array == NULL || action == NULL)
		return;

	for (itr = 0; itr < size; itr++)
	{
		action(array[itr]);
	}
}
