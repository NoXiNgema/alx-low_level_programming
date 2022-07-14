#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @K: input string
 * Return: the pointer to dest.
 */
char *cap_string(char *K)
{
	int count = 0, i;

	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(K + count) >= 97 && *(K + count) <= 122)
		*(K + count) = *(K + count) - 32;
	count++;
	while (*(K + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(K + count) == sep[i])
			{
				if ((*(K + (count + 1)) >= 97) && (*(K + (count + 1)) <= 122))
					*(K + (count + 1)) = *(K + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return (K);
}
