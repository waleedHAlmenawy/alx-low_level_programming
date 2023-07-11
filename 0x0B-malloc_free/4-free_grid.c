#include <stdlib.h>
/**
 * free_grid - free 2D array
 * @grid: 2D array
 * @height: 2D array's length
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
