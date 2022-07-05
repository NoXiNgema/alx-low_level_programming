#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int A, a;

	for (a = 0; a <= 9; a++)
	{
		for (A = 97; A <= 122; A++)
		{
			_putchar(A);
		}
		_putchar('\n');
	}
}
