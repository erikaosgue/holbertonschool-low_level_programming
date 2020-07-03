#!/usr/bin/python3
""" Module: 5-island_perimeter"""


def island_perimeter(grid):
    """island_perimeter

    [Find the perimeter of the island in grid]

    Args:
        grid (matrix): is a list of list of integers

    Returns:
        [int]: [perimeter of the island in grid]
    """
    perimeter = 0
    if grid is None:
        return perimeter

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                continue
            if i >= 1:
                if grid[i-1][j] == 1:
                    perimeter += 1
            if j >= 1:
                if grid[i][j-1] == 1:
                    perimeter += 1
            if i < (len(grid) - 1):
                if grid[i+1][j] == 1:
                    perimeter += 1
            if j < (len(grid[i]) - 1):
                if grid[i][j+1] == 1:
                    perimeter += 1
    return perimeter
