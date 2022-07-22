#include "main.h"

/**
 * _strcmp - unction that compares two strings.
 * @s1: string
 * @s2: string
 * Return: 0 if s1 and s2 are equals another number if not
 */
int _strcmp(char *s1, char *s2)
{
	int X = 0, Z = 0;

	while (Z == 0)
	{
		if ((*(s1 + X) == '\0') && (*(s2 + X) == '\0'))
			break;
		Z = *(s1 + X) - *(s2 + X);
		X++;
	}
	return (Z);
}
