#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Do not print 2 and 4
 *
 * Return: no return
 */
void print_most_numbers(void)
{
	int p;

	for (p = 48; p < 58; p++)
	{
		if (p != 50 && p != 52)
		{
			_putchar(p);
		}
	}
	_putchar('\n');
}
