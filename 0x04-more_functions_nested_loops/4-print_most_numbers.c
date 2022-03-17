#include "main.h"

/* main - Prints the numbers, from `0` to `9`
 * Followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
        int c;
        c = 0;

        if (c <= 9 && c != 2 && c != 4)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
