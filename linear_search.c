#include <stdio.h>
#include "search_algos.h"

int main() 
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}

int linear_search(int *array, size_t size, int value)
{
    int i;

    // Returns -1 if array is NULL or 
    // Value not present in array
    if (array == NULL) 
        return(-1);
    for (i = 0; i < (int)size; i++)
    {
        printf("Value checked array[%u] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}