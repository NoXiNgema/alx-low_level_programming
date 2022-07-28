#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 * Return: pointer to the newly created array, or NULL
 *
 */
int *array_range(int min, int max)
{
	int *k;
	int i;

	if (min > max)
		return (NULL);
	k = malloc(sizeof(*k) * ((max - min) + 1));

	if (k == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		k[i] = min;

	return (k);
}
