#include <stdio.h>

/**
 * puts2 - Prints every other char of a string from the first char.
 * @str: The input string.
 */
void puts2(char *str)
{
	if (str == NULL)
	{
		putchar('\n');
		return;
	}

	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		putchar('\n');
		i += 2;
	}
}
