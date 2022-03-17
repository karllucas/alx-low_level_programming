#include "main.h"

/**
 * prints numbers between 0 and 9
 *
 * Return: Always 0
*/

void print_numbers(void)
{
        int ch;

        ch = 48;

        while (ch >= 48 && ch <= 57)
        {
                _putchar(ch);
                ch++;
        }
        _putchar('\n');
}
