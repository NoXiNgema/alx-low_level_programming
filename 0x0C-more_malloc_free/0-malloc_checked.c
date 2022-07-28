#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: given integer
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *k;

	k = malloc(b);

	if (k == NULL)
	{
		exit(98);
	}

	return (k);
}
