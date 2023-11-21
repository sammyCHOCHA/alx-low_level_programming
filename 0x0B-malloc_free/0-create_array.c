#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    if (size == 0)
    {
        return NULL;
    }

    unsigned int i = 0;
    char *array = malloc(size * sizeof(char));

    if (array == NULL)
    {
        return NULL; /* Allocation failed */
    }

    while (i < size)
    {
        array[i] = c;
        i++;
    }

    return array;
}

