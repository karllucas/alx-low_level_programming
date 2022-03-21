#include "main.h"

/**
 * 1-swap.c - swaps the values of two integers.
 * @a: input integer.
 * @b: also input integer.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	*a = 98;
	*b = 42;
	*a = &b;
	*b = &a;
}
