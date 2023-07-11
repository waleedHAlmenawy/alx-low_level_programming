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

	if (p == NULL)
		return (NULL);
	while (i < height)
	{
		p[i] = (int *) malloc(sizeof(int) * width);

		if (p[i] == NULL)
			return (NULL);
		while (k < width)
		{
			p[i][k] = 0;
			k++;
		}
		i++, k = 0;
	}
	return (p);
}
