#include "main.h"
#include <stdlib.h>

/**
 * print_name - a function that prints a name
 * @name: Given name
 * @f:Function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
