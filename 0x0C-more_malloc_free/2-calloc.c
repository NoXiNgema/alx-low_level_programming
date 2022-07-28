#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @size: size of bytes.
 * @nmemb: number of elements.
 * Return: The _calloc function allocates memory for an array of nmemb
 * elements of
 * size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *k;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	k = malloc(nmemb * size);

	if (k == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		k[i] = 0;
	}
	return (k);
}
