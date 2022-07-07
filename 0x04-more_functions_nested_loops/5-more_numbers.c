#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14, followed by a new
 * line
 * Return: no return
 */
void more_numbers(void)
{
	int x,y;

	for (x = 1; x < 11; x++)
	{
		for (y = 0; y < 15; y++)
		{
			if (y >= 10)
				_putchar((y / 10) + 48);
			_putchar((y % 10) + 48);
		}
		_putchar('\n');
	}
}
