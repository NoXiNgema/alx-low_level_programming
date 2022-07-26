#include "main.h"
#include <stdlib.h>

/**
 * str_concat - unction that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer of an array of chars or NULL
 */
char *str_concat(char *s1, char *s2)
{

	char *con;
	unsigned int h, i, j, k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (h = 0; s1[h] != '\0'; h++)
	{
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
	}

	con = malloc(sizeof(char) * (i + h + 1));

	if (con == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < h; j++)
	{
		con[j] = s1[j];
	}
	k = i;

	for (i = 0; i <= k; j++, i++)
		con[j] = s2[i];

	return (con);
}
