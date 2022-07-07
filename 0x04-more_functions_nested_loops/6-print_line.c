#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: integer value
 * Return: no return
 */
void print_line(int n)
{
	int x = 95;
	int y;

	if (n > 0)
	{
		for (y = 0; y < n; y++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
