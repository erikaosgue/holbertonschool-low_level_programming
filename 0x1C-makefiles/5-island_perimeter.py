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
    perimeter = 1

    for row in grid:
        for j in row:
            perimeter += j
    perimeter *= 2
    return perimeter
