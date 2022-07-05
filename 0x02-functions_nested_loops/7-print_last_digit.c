#include "main.h"

/**
 * main - Prints the last digit
 *
 * @n: input number as an integer
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int s;

	s = n % 10;
	if (s < 0)
	{
		_putchar(-s + 48);
		return (-s);
	}
	else 
	{
		_putchar(l + 48);
		return (l);
	}
}
