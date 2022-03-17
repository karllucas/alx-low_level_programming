#include "main.h"

/**
 * prints numbers between 0 and 9
 *
 * Return: Always 0
*/

void print_numbers(void)
{
        int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
