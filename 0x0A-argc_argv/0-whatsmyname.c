#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of the program followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main (int argc, char *argv[])
{
	int i = 0;
	printf("argv[%d] = %s/n", i, argv[i]);
	return(0);
}
