#include "sandpiles.h"

/**
 * sandpiles_sum - function to sum two sandpiles
 * @grid1: the first grid to sum
 * @grid2: the second grid to sum
 * Return: each toppling round, only if the sandpile is unstable.
 */


void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	sum_grids(grid1, grid2);
}


/**
 * printing_grid - function to print grid
 * @grid1: the first grid to print
 * Return: nothing.
 */

void printing_grid(int grid1[3][3])
{
	int x, y;

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			if (y)
				printf(" ");
			printf("%d", grid1[x][y]);
		}
		printf("\n");
	}
}

/**
 * sum_grids - function to sum two grids
 * @grid1: the first grid to be sum
 * @grid2: the second grid to be sum
 */

void sum_grids(int grid1[3][3], int grid2[3][3])
{
	int x, y;

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			grid1[x][y] += grid2[x][y];
		}
	}

	while (verify(grid1))
	{
		printf("=\n");
		printing_grid(grid1);
		operations(grid1);
	}
}


/**
 * verify - function to check if the sandpile is stable or unstable
 * @grid1: the first grid to be sum
 * Return: 1 if the sandpile numbers are greater than 3, or 0 if not.
 */

int verify(int grid1[3][3])
{
	int x, y;

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			if (grid1[x][y] > 3)
			{
				return (1);
			}
		}
	}
	return (0);
}


/**
 * operations - function to toppling the grid and make a stable one
 * @grid1: the grid to be toppling
 */

void operations(int grid1[3][3])
{
	int x, y, temp[3][3];

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			temp[x][y] = 0;
		}
	}

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			if (grid1[x][y] > 3)
			{
				temp[x][y] -= 4;
				if (x + 1 < 3)
					temp[x + 1][y] += 1;
				if (x - 1 >= 0)
					temp[x - 1][y] += 1;
				if (y + 1 < 3)
					temp[x][y + 1] += 1;
				if (y - 1 >= 0)
					temp[x][y - 1] += 1;
			}
		}
	}
	sum_grids(grid1, temp);
}
