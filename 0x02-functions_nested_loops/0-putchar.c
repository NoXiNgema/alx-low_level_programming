#include <stdio.h>

/**
 * main - Print _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int position, size;

	size = sizeof(str) / sizeof(int);
	for (position = 0; position < size; position++)
	{
		putchar(str[position]);
	}
	putchar("\n");
	return (0);
}
