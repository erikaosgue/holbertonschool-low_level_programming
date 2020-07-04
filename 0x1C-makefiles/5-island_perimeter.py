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
    prev = 0
    for row in grid:
        for j in row:
            if j == 1:
                perimeter += 4
                if prev == 1:
                    perimeter -= 2
                prev = 1
            else:
                prev = 0
    prev = 0
    for i in range(len(grid[0])):
        for j in range(len(grid)):
            if grid[j][i] == 1:
                if prev == 1:
                    perimeter -= 2
                prev = 1
            else:
                prev = 0
    return perimeter
