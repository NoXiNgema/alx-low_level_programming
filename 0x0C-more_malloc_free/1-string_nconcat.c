#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  a function that concatenates two strings.
 * @n: amount of bytes
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer to the allocated memory
 *
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *lx;
	unsigned int ls1, ls2, llx, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
	{
	}
	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
	{
	}

	if (n > ls2)
		n = ls2;

	llx = ls1 + n;

	lx = malloc(llx + 1);

	if (lx == NULL)
		return (NULL);

	for (i = 0; i < llx; i++)
		if (i < ls1)
			lx[i] = s1[i];
		else
			lx[i] = s2[i - ls1];

	lx[i] = '\0';

	return (lx);
}
