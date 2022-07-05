#include "main.h"

/**
 * main - Prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int Alp;

	for (Alp = 97, Alp <= 122, Alp++)
	{
		_putchar(Alp);
	}
	_putchar('\n');
	return (0);
