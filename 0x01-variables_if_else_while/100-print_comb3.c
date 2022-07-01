#include <stdio.h>

/**
 * main - Prints all combinatons of numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, t;

	i = 48;
	t = 48;

	while (t < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (t != i && t < i)
			{
				putchar(t);
				putchar(i);
				if (i == 57 && t == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		t++
	}
	putchar('\n');
	return (0);
}
