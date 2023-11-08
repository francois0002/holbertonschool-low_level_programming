#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* free_grid- Entry point
* Description: libère la mémoire de la fonction alloc
* @grid : tableau à libérer
* @width : colones
* Return: libération
*/

void free_grid(int **grid, int width)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < width; i++)
	{
		free(grid[i]);
	}


	free(grid);
}
