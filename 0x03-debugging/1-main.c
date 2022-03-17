#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10) /* condition checks if i is less than 10 */
	{
                putchar(i);
		/* Increment i by one */
	}

	printf("Infinite loop avoided! \\o/\n");

        return (0);
}
