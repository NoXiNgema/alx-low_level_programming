#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: Is a pointer
 * @b: is a pointer
 *
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int Q = *a;
	*a = *b;
	*b = Q;
}
