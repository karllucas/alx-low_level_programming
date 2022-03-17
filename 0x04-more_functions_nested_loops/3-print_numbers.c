#include "main.h"

/**
 * prints numbers between 0 and 9
 *
 * Return: Always 0
*/

void print_numbers(void)
{
        int ch;

        while (ch >= 48 && ch <= 57)
        {
                _putchar(ch);
                ch++;
        }
        _putchar('\n');
}
