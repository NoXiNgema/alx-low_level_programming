#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: destination
 * @src: source
 * @n: bytes from src
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int copy;

	for (copy = 0; copy < n && src[copy] != '\0'; copy++)
	{
		dest[copy] = src[copy];
	}
	for ( ; copy < n; copy++)
		dest[copy] = '\0';
	return (dest);
}
