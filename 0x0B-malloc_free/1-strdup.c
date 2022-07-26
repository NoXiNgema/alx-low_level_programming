#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: string given as a parameter.
 * Return: pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *all;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	all = malloc(sizeof(char) * (i + 1));

	if (all == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		all[j] = str[j];
	}
	return (all);
}
