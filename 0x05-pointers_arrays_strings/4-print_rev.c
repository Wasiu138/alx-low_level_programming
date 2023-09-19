#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}

	while (length >= 0)
	{
		putchar(s[length]);
		length--;
	}

	putchar('\n');
}
