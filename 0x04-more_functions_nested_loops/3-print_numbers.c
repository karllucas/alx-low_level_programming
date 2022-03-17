#include "main.h"

/**
 * prints numbers between 0 and 9
 *
 * Return: Always 0
*/

void print_numbers(void)
{
        int c;

	for (c = 0; c < 10; c++)
	{
                _putchar(c + '0');
        }

        _putchar('\n');
}
