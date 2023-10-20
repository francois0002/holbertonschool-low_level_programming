#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_diagonal- Entry point
 * Description: affiche une ligne en diagonale dans le terminal
 * @n : nombre qui sera remplacé par un antislash
 * Return:  nothing
 */
void print_diagonal(int n)

{   

int i;
int j;
    for( i = 0; i < n ; i++)
    {
        for(j = 0; j < n ; j++)
        {
            if(j == i)
                _putchar(47);
            else
                _putchar(32);
        }
       _putchar('\n');
    }


}
