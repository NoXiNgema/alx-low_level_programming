#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 *
 *  @s: string
 *  @c: character.
 *  Return: Returns a pointer to the first occurrence of the character c in the
 *  string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	unsigned int X;

	for (X = 0; *(s + X) != '\0'; X++)
	{
		if (*(s + X) == c)
		{
			return ((s + X));
		}
	}
	if (*(s + X) == c)
	{
		return (s + X);
	}
	return ('\0');
}
