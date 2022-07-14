#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of
 * a string to uppercase.
 * @K: input string
 * Return: the pointer to dest
 */
char *string_toupper(char *K)
{
	int count = 0;

	while (*(K + count) != '\0')
	{
		if ((*(K + count) >= 97) && (*(K + count) <= 122))
		{
			*(K + count) = *(K + count) - 32;
		}
		count++;
	}
	return (s);
}
