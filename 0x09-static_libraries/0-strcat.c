#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: destination.
 * @src: source.
 *
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int count, j = 0;

	for (count = 0; dest[count] != '\0'; count++)
	{
	}
	while (j >= 0)
	{
		dest[count] = *(src + j);
		if (*(src + j) == '\0')
			break;
		count++;
			j++;
	}
	return (dest);
}
