#!/usr/bin/python3
""" Module that returns the perimeter of the island described in grid:

    - grid is a list of list of integers:
        - 0 represents a water zone
        - 1 represents a land zone
        - One cell is a square with side length 1
        - Grid cells are connected horizontally/vertically (not diagonally).
        - Grid is rectangular, width and height don't exceed 100
    - Grid is completely surrounded by water.
    - The island doesn't have “lakes” (water inside that isn't connected to
      the water around the island).
    """


def island_perimeter(grid):
    """ Returns the perimeter of grid.
        """
    if grid is None or not isinstance(grid, list):
        return

    perimeter = 0
    rows = len(grid)
    columns = len(grid[0])

    for r in range(rows):
        for c in range(columns):
            if grid[r][c] == 1:
                """ Top """
                if c == 0 or grid[r][c - 1] == 0:
                    perimeter += 1
                """ Right """
                if r == rows or grid[r + 1][c] == 0:
                    perimeter += 1
                """ Bottom """
                if c == columns or grid[r][c + 1] == 0:
                    perimeter += 1
                """ Left """
                if r == 0 or grid[r - 1][c] == 0:
                    perimeter += 1
    return perimeter
