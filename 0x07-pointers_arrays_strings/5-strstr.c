#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: entire string.
 *  @needle: substring.
 *  Return: pointer to the beginning of located substring
 *  or NULL if the substring is not found.
 */


char *_strstr(char *haystack, char *needle)
{
	char *haystack1;
	char *needle1;

	while (*haystack != '\0')
	{
		haystack1 = haystack;
		needle1 = needle;

		while (*haystack != '\0' && *needle1 != '\0' && *haystack == *needle1)
		{
			haystack++;
			needle1++;
		}
		if (!*needle1)
		{
			return (haystack1);
		}
	haystack = haystack1 + 1;
	}
	return (0);
}
