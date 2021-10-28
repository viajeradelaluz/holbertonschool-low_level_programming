#include "main.h"
/**
 * free_grid - Free a 2d array.
 * @grid: Figure of the array.
 * @height: Size of the arra.
 * Return: no return.
 */
void free_grid(int **grid, int height)
{
	while (height--)
		free(grid[height]);
	free(grid);
}
