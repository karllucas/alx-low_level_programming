#include "main.h"

/* A function that prints the numbers, from `0` to `9`
 * Should be followed by a new line
 * Return: Always 0
*/

int main(void)
{
	int c;
	c = 0;
	if ( c <= 9)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
