#include "main.h"

/**
 * print_alphabet - Prints the alphabet, in lowercase, followed by a new line
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char Alp;

	for (Alp = 'a'; Alp <= 'z'; Alp++)
	{
		_putchar(Alp);
	}
	_putchar('\n');
}
