#include <stdlib.h>
/**
 * alloc_grid - creates 2D array
 * @width: Width
 * @height: Height
 * Return: 2D array
 */
int **alloc_grid(int width, int height)
{
	int i = 0, k = 0;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **) malloc(sizeof(int *) * height);
	while (i < height)
	{
		p[i] = (int *) malloc(sizeof(int) * width);
		while (k < width)
		{
			p[i][k] = 0;
			k++;
		}
		i++, k = 0;
	}
	return (p);
}
