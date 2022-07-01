#include <stdio.h>

/**
 * main - Prints the alphabet except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	for (r = 97; r < 123; r++)
	{
		if (r != 101 && r != 113)
		{
			putchar(r);
		}
	}
	putchar('\n');
	return (0);
}
