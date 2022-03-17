#include "main.h"

/**
 * main - Prints 10 times the numbers, from 0 to 14,
 *  followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
        int i, k;
        i = 0;
        while (i <= 10)
        {
                k = 0;
                while (k <= 14)
                {
                        _putchar(k);
                        k++;
                }
		_putchar('\n');
		i++;
	}
}
