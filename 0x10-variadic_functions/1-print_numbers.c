#include "variadic_functions.h"

/**
 * print_numbers - prints numbers seperated with seperator
 * @separator: separator between numbers
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int n;
	int *num;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int *);
		if (!separator)
			printf("%d", num);
		else if (separator && i == 0)
			printf("%d", num);
		else
			printf("%s%d", separator, num);
	}

	printf("\n");

	va_end(list);
}
