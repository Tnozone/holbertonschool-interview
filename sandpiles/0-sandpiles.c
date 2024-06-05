#include "sandpiles.h"
#include <stdlib.h>


/**
 * computes the sum of two sandpiles.
 * @grid1: Left 3x3 grid.
 * @grid2: Right 3x3 grid.
 * 
 * Return: No Return
 */

void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
    int i, j, limit = 3;
    for (i = 0; i < limit; i++)
		for (j = 0; j < limit; j++)
			grid1[i][j] += grid2[i][j];
}