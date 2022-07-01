#include <stdio.h>

/**
 * main - Prints the Alphabet in lowercase
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	char ch[26] = "abcdefghijklmnopqrstuvwxyz";
	int r;

	for (r = 0; r < 26; r++)
	{
		putchar(ch[r]);
	}
	putchar('\n');
	return (0);
}	
