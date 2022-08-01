#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the name of the file it
 * was compiled from, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int k;
	char i[] = __FILE__;

	for (k = 0; i[k] != '\0'; k++)
	{
		_putchar(i[k]);
	}

	_putchar('\n');

	return (0);
}
