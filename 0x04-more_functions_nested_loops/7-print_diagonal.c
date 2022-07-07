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
		int k;

		for (i = 0; i < n; i++)
		{
			for (k = i; k < n; k++)
			{
				_putchar(j) * k;
				_putchar(92);
				_putchar('\n');
			}
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
