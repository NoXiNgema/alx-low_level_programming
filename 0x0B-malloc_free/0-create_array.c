#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes it
 * with a specific char
 * @size: size of the array
 * @c: Specific char
 * Return: NULL or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *cArray;
	unsigned int k;

	if (size == 0)
	{
		return (NULL);
	}
	cArray = malloc(sizeof(c) * size);

	if (cArray == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < size; k++)
	{
		cArray[k] = c;
	}
	return (cArray);
}
