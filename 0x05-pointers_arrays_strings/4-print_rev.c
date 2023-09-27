#include <stdio.h>

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}

	while (length > 0)
	{
		length--;
		putchar(s[length]);
	}

	putchar('\n');
}
