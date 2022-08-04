#include <stdlib.h>
<<<<<<< HEAD
=======
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers.
 * @n: number of integers passed to the function.
 * @separator: string to be printed between numbers.
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
>>>>>>> ed01908c15822c4d5e4f064888671f2a0c076c55
