#include <stdio.h>
#include search_algos.h
/*
*linear_search - searches an array, returns the index
*when an element identical to @value is found.
*@array: pointer to the address of the first array element.
*@size: size of the array.
*@value: value to search for.
*
*/

int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return (-1);

    for(i=0; i < size; i++)
        if (*array + i == value)
            return (i);
        else
            return (-1);
    
}