#include "main.h"
/**
*free_grid- frees a 2 dimensional grid
*@grid: 2 dimensional grid
*@height: number of raws
*Return: void
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
