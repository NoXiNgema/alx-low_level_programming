#include <stdio.h>

/**
 * main - a program that prints the name of the file it
 * was compiled from, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	prinf("%s\n", __FILE__);

	return(0);
}
