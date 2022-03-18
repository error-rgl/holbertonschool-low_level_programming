#!/usr/bin/python3
""" Module that contains the island_perimeter function
"""


def island_perimeter(grid):
    """ Function that returns the perimeter of island described in grid
    """
    perimeter = 0

    n_fila = len(grid)

    if grid != []:
        n_columns = len(grid[0])

    for a in range(n_fila):
        for b in range(n_columns):
            if grid[a][b] == 1:
                if (a - 1) == -1 or grid[a - 1][b] == 0:
                    perimeter += 1
                if (a + 1) == n_fila or grid[a + 1][b] == 0:
                    perimeter += 1
                if (b - 1) == -1 or grid[a][b - 1] == 0:
                    perimeter += 1
                if (b + 1) == n_columns or grid[a][b + 1] == 0:
                    perimeter += 1

    return perimeter
