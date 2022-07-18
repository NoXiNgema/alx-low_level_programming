#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 *
 * @n: number of bytes to fill
 * @b: constant byte to fill with
 * @s: pointer to a memory area
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char X[];
	unsigned int i;

	s = &X;

	for (i = 0; i < n; i++)
	{
		X[i] = b;
	}
	return(s);
}
