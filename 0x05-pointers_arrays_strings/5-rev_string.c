#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: Is a pointer to char
 *
 * Return: no return
 */
void rev_string(char *s)
{
	int count = 0, i, j;

	char X;

	char *str;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			X = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = X;
		}
	}
}
