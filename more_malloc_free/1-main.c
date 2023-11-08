#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;


    concat = string_nconcat("Best ", "school !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}

/**
    char *concat;
    char *test = NULL;

    concat = string_nconcat("Best ", test, 5);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
 */