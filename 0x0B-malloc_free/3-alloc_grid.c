#include <stdlib.h>
/**
 * alloc_grid - creates 2D array
 * @width: Width
 * @height: Height
 * Return: 2D array
 */
int **alloc_grid(int width, int height)
{
	int i = 0, k = 0, j = 0;
	int **p = (int **)malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0 || p == NULL)
		return (NULL);

	while (i < height)
	{
		p[i] = (int *) malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			while (j < i)
			{
				free(p[j]);
				j++;
			}
			free(p);
			return (NULL);
		}
		while (k < width)
		{
			p[i][k] = 0;
			k++;
		}
		i++, k = 0;
	}
	return (p);
}
