#include "main.h"

/**
 * prints numbers between 0 and 9
 *
 * Return: Always 0
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
