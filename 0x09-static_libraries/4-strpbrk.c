#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string
 *
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, p;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (p = 0; *(accept + p) != '\0'; p++)
		{
			if (*(s + i) == *(accept + p))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
