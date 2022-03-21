#include "main.h"

/**
 * 4-print_rev.c - prints a string, in reverse, followed by a new line.
 * @s: input integer
 */
void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
