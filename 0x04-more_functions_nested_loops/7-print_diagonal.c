#include "main.h"

/**
 * print_diagonal - prints diagonal line n times
 * @n: times diagonal line is printed
 * Return: no return
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;
		int j = 32;

		for (i = 0; i < n; i++)
		{
			_putchar(j);
			_putchar(92);
			j = j + 32;
			_putchar('\n');
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
