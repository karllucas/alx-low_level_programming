#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}

int binary_search(int *array, size_t size, int value)
{
    int lo, i = 0;
    size_t hi = size;
    size_t md = lo + ((hi - lo) / 2);

    if (array == NULL || size == NULL)
        return (-1);

    //Run loop to check if value is greater than midpoint
    do
    {
        if (array[i] == value)
        {
            return (i);
            printf("Found %d at index: %u", array[i], i);
        }
        else if (array[i] > value)
        {
            printf("Searching in array: %u", i);
            printf("\n");
            hi = md;
            i++;
        } 
        else
        {
            printf("Searching in array: %u", i);
            printf("\n");
            lo = md + 1;
            i++;
        }
    }
    while (lo < hi);

    return (-1);
}