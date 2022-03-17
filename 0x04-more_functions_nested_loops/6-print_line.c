#include "main.h"

/**
 * main - Draws a straight line in the terminal
 * followed by a new line '\n'
 *
 * check if n is 0 or less
 * then print \n
 *
 * Return: Always 0.
 */

int main(void)
{
        int n;
        n = 0;
        while (n <= 10)
        {
                while (n <= 0)
		{
                        _putchar('n');
                }
                _putchar('_');
                n++;
        }
        _putchar('_');
}
