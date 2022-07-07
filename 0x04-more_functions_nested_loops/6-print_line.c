#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: integer value
 * Return: no return
 */
void print_line(int n)
{
	int x = 95;
	int y = 0;

	for (n > 0)
	{
		while (y < n)
		{
			_putchar(x);
			y++;
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
