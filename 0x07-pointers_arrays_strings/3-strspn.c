#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 *
 * @s: initial segment
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, X;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		X = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				X = 0;
				break;
			}
		}
		if (X == 1)
		{
			break;
		}
	}
	return (i);
}
