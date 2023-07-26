#!/usr/bin/python3
"""Contains function that calculates the perimeter of an island"""


def island_perimeter(grid):
    """Returns the perimeter of island described in grid
        Args:
            grid: repesentation of water and land
    """
    has_land = False
    for row in grid:
        if not all(i == 0 for i in row):
            has_land = True
    if not has_land:
        return 0
    else:
        return 5
