#include "main.h"

/**
 * void print_numbers(void) - prints the numbers, from 0 to 9
 * followed by a new line
 *
 * Return: 0 Always
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
