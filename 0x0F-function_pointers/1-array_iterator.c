#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @size: size of the array
 * @array: input integer array
 * @action: pointer to the function.
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array && action)
		for (k = 0; k < size; k++)
			action(array[k]);
}
