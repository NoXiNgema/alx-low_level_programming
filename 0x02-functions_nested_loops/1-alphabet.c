#include "main.h"

/**
 * main - Prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int Alp;

	for (Alp =97; Alp <= 122; Alp++)
	{
		_putchar(Alp);
	}
	_putchar('\n');
}
