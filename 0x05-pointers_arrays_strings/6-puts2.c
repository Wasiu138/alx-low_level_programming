#include <stdio.h>

/**
 * puts2 - Print every other char of a string, starting with the first char.
 * @str: The input string.
 */
void puts2(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		putchar('\n');
		return;
	}

	while (str[i] != '\0')
	{
		putchar(str[i]);
		putchar('\n');
		i += 2;
	}
}
